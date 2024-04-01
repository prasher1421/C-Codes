#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// Structure to represent a production rule
struct Production {
    char nonTerminal;
    string production;
};

// Function to calculate First set of a non-terminal
set<char> calculateFirst(char nonTerminal, const map<char, vector<string>>& productions, map<char, set<char>>& firstSets) {
    if (firstSets.find(nonTerminal) != firstSets.end()) {
        return firstSets[nonTerminal];
    }

    set<char> firstSet;

    for (const string& production : productions.at(nonTerminal)) {
        char firstSymbol = production[0];

        if (isupper(firstSymbol)) {
            set<char> subFirstSet = calculateFirst(firstSymbol, productions, firstSets);
            firstSet.insert(subFirstSet.begin(), subFirstSet.end());
        } else {
            firstSet.insert(firstSymbol);
        }
    }

    firstSets[nonTerminal] = firstSet;
    return firstSet;
}

// Function to calculate Follow set of a non-terminal
set<char> calculateFollow(char nonTerminal, const map<char, vector<string>>& productions, map<char, set<char>>& firstSets, map<char, set<char>>& followSets) {
    if (followSets.find(nonTerminal) != followSets.end()) {
        return followSets[nonTerminal];
    }

    set<char> followSet;

    for (const auto& productionPair : productions) {
        char currentNonTerminal = productionPair.first;
        const vector<string>& productionList = productionPair.second;

        for (const string& production : productionList) {
            size_t pos = production.find(nonTerminal);

            if (pos != string::npos) {
                if (pos + 1 < production.size()) {
                    char nextSymbol = production[pos + 1];

                    if (isupper(nextSymbol)) {
                        set<char> subFirstSet = calculateFirst(nextSymbol, productions, firstSets);
                        followSet.insert(subFirstSet.begin(), subFirstSet.end());
                        if (subFirstSet.find('@') != subFirstSet.end()) {
                            set<char> subFollowSet = calculateFollow(currentNonTerminal, productions, firstSets, followSets);
                            followSet.insert(subFollowSet.begin(), subFollowSet.end());
                        }
                    } else {
                        followSet.insert(nextSymbol);
                    }
                } else {
                    if (currentNonTerminal != nonTerminal) {
                        set<char> subFollowSet = calculateFollow(currentNonTerminal, productions, firstSets, followSets);
                        followSet.insert(subFollowSet.begin(), subFollowSet.end());
                    }
                }
            }
        }
    }

    followSets[nonTerminal] = followSet;
    return followSet;
}

int main() {
    // Example LL(1) grammar

    // map<char, vector<string>> productions = {
    //     {'S', {"aAB", "bBA"}},
    //     {'A', {"a", "@"}},
    //     {'B', {"b"}}
    // };

    // S --> A | a
    // A --> a 

    map<char, vector<string>> productions = {
        {'S', {"A", "a"}},
        {'A', {"a"}}
    };

    map<char, set<char>> firstSets;
    map<char, set<char>> followSets;

    for (const auto& productionPair : productions) {
        char nonTerminal = productionPair.first;
        calculateFirst(nonTerminal, productions, firstSets);
    }

    char startSymbol = 'S';
    followSets[startSymbol].insert('$'); // $ represents end of input

    for (const auto& productionPair : productions) {
        char nonTerminal = productionPair.first;
        calculateFollow(nonTerminal, productions, firstSets, followSets);
    }

    // Check LL(1) property
    bool isLL1 = true;

    for (const auto& productionPair : productions) {
        char nonTerminal = productionPair.first;
        const vector<string>& productionList = productionPair.second;

        set<char> intersection;

        for (const string& production : productionList) {
            set<char> firstSet;

            if (isupper(production[0])) {
                firstSet = firstSets[production[0]];
            } else {
                firstSet.insert(production[0]);
            }

            intersection.insert(firstSet.begin(), firstSet.end());
        }

        if (intersection.size() != productionList.size()) {
            isLL1 = false;
            break;
        }
    }

    if (isLL1) {
        cout << "The grammar is LL(1)." << endl;
    } else {
        cout << "The grammar is not LL(1)." << endl;
    }

    return 0;
}