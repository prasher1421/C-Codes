#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <chrono>
#include <thread>
#include <random>

class Utility {
public:
    int RandomNumber(int min, int max) {
        return min + rand() % (max - min + 1);
    }
};

class Node {
public:
    std::string stationName;
    std::vector<int> queue;
    int attempts;
};

class Simulation {
private:
    Utility utils;
    static std::mt19937 random;
    std::vector<Node*> nodeList;
    Node A, B, C, D, E;
    int currentTime;
    int frameSize;               //frame size in bits.
    int channelCapacity;         //channel capacity in bits.
    int frameTime;               //time to transmit one frame on the channel in milliseconds.
    int collisions;

public:
    Simulation() : A(), B(), C(), D(), E(), currentTime(0), frameSize(10), channelCapacity(100), collisions(0) {
        frameTime = (frameSize / channelCapacity) * 100;
        nodeList.push_back(&A);
        nodeList.push_back(&B);
        nodeList.push_back(&C);
        nodeList.push_back(&D);
        nodeList.push_back(&E);

        generateFrames(5);

        std::thread t1(&Simulation::intervalTimerElapsed, this);
        t1.join();
    }

private:
    void intervalTimerElapsed() {
        std::cout << "Simulation started." << std::endl;
        while (currentTime <= 10) {
            int framesOnChannel = 0;
            for (Node* n : nodeList) {
                for (size_t i = 0; i < n->queue.size(); ++i) {
                    if (currentTime == n->queue[i]) {
                        std::cout << currentTime << " " << n->stationName << " " << n->queue[i] << std::endl;
                        framesOnChannel++;
                        collisions++;
                        if (framesOnChannel > 1)
                            n->queue[i] = backOff(n) + currentTime;
                    }
                }
            }
            currentTime++;
            if (framesOnChannel > 1) {
                std::cout << "Frames on Channel: " << framesOnChannel << " Collision!" << std::endl;
            }
            else {
                std::cout << "Frames on Channel: " << framesOnChannel << std::endl;
            }
            framesOnChannel = 0;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        std::cout << "Simulation ended." << std::endl;
    }

    void generateFrames(int load_G) {
        for (int i = 0; i < load_G; ++i) {
            Node* randomStation = getRandomNode();
            randomStation->queue.push_back(utils.RandomNumber(0, 10));
        }

        for (Node* n : nodeList) {
            std::sort(n->queue.begin(), n->queue.end());
        }
    }

    int backOff(Node* node) {
        int k = node->attempts;
        if (k > 10)
            k = 10;
        int R = static_cast<int>(std::pow(2, k) - 1);
        int backOffTime = random() % R * frameTime;
        return backOffTime + (frameTime * 2);
    }

    Node* getRandomNode() {
        switch (random() % 5 + 1) {
        case 1:
            return &A;
        case 2:
            return &B;
        case 3:
            return &C;
        case 4:
            return &D;
        default:
            return &E;
        }
    }
};

std::mt19937 Simulation::random(static_cast<unsigned int>(std::time(nullptr)));

int main() {
    Simulation simulation;
    return 0;
}
