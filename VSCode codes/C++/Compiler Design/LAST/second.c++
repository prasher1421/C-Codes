#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

// Function to calculate First set of a non-terminal
set<char> first(char nT, const map<char, vector<string>>& prs, map<char, set<char>>& firstSets) {
    if (firstSets.find(nT) != firstSets.end()) {
        return firstSets[nT];
    }

    set<char> firstSet;

    for (const string& pr : prs.at(nT)) {
        char firstSymbol = pr[0];

        if (isupper(firstSymbol)) {
            set<char> subFirstSet = first(firstSymbol, prs, firstSets);
            firstSet.insert(subFirstSet.begin(), subFirstSet.end());
        } else {
            firstSet.insert(firstSymbol);
        }
    }

    firstSets[nT] = firstSet;
    return firstSet;
}

// Function to calculate Follow set of a non-terminal
set<char> follow(char nT, const map<char, vector<string>>& prs, map<char, set<char>>& firstSets, map<char, set<char>>& followSets) {
    if (followSets.find(nT) != followSets.end()) {
        return followSets[nT];
    }

    set<char> followSet;

    for (const auto& prPair : prs) {
        char currentnT = prPair.first;
        const vector<string>& prList = prPair.second;

        for (const string& pr : prList) {
            size_t pos = pr.find(nT);

            if (pos != string::npos) {
                if (pos + 1 < pr.size()) {
                    char nextSymbol = pr[pos + 1];

                    if (isupper(nextSymbol)) {
                        set<char> subFirstSet = first(nextSymbol, prs, firstSets);
                        followSet.insert(subFirstSet.begin(), subFirstSet.end());
                        if (subFirstSet.find('@') != subFirstSet.end()) {
                            set<char> subFollowSet = follow(currentnT, prs, firstSets, followSets);
                            followSet.insert(subFollowSet.begin(), subFollowSet.end());
                        }
                    } else {
                        followSet.insert(nextSymbol);
                    }
                } else {
                    if (currentnT != nT) {
                        set<char> subFollowSet = follow(currentnT, prs, firstSets, followSets);
                        followSet.insert(subFollowSet.begin(), subFollowSet.end());
                    }
                }
            }
        }
    }

    followSets[nT] = followSet;
    return followSet;
}

int main() {

    map<char, vector<string>> prs = {
        {'S', {"A", "a"}},
        {'A', {"b"}}
    };

    map<char, set<char>> firstSets;
    map<char, set<char>> followSets;

    for (const auto& prPair : prs) {
        char nT = prPair.first;
        first(nT, prs, firstSets);
    }

    char startSymbol = 'S';
    followSets[startSymbol].insert('$'); // $ represents end of input

    for (const auto& prPair : prs) {
        char nT = prPair.first;
        follow(nT, prs, firstSets, followSets);
    }

    // Check LL(1) property
    bool isLL1 = true;

    for (const auto& prPair : prs) {
        char nT = prPair.first;
        const vector<string>& prList = prPair.second;

        set<char> intersection;

        for (const string& pr : prList) {
            set<char> firstSet;

            if (isupper(pr[0])) {
                firstSet = firstSets[pr[0]];
            } else {
                firstSet.insert(pr[0]);
            }

            intersection.insert(firstSet.begin(), firstSet.end());
        }

        if (intersection.size() != prList.size()) {
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