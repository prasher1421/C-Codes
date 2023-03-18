#include <bits/stdc++.h>
using namespace std;


struct Process {
    int id;        
    int burstTime;  
    int priority;   
    int waitingTime;
};


void calculateWaitingTime(vector<Process>& processes) {
    // Sort the processes based on priority Own comparator in c++
    sort(processes.begin(), processes.end(),
        [](const Process& a, const Process& b) {
            return a.priority < b.priority;
        });

    int n = processes.size();
    vector<int> totalBurstTime(n);
    totalBurstTime[0] = processes[0].burstTime;


    for (int i = 1; i < n; i++) {
        totalBurstTime[i] = totalBurstTime[i-1] + processes[i].burstTime;
    }

    for (int i = 0; i < n; i++) {
        processes[i].waitingTime = totalBurstTime[i] - processes[i].burstTime;
    }
}

// Function to print the details of each process
void printProcesses(vector<Process>& processes) {
    cout << "ID\tBurst time\tPriority\tWaiting time\n";
    for (const Process& p : processes) {
        cout << p.id << "\t" << p.burstTime << "\t\t" << p.priority
            << "\t\t" << p.waitingTime << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter details of process " << i+1 << endl;
        processes[i].id = i+1;
        cout << "Burst time: ";
        cin >> processes[i].burstTime;
        cout << "Priority: ";
        cin >> processes[i].priority;
    }

    calculateWaitingTime(processes);
    printProcesses(processes);

   
    int totalWaitingTime = 0;
    for (const Process& p : processes) {
        totalWaitingTime += p.waitingTime;
    }
    double avgWaitingTime = (double)totalWaitingTime / n;
    cout << "Average waiting time: " << avgWaitingTime << endl;

    return 0;
}