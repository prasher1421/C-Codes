#include <iostream>
#include <stack>

using namespace std;

// Define the grammar productions
string productions[] = {
    "S' -> S",
    "S -> A",
    "S -> B",
    "A -> a",
    "B -> b"
};

// Define the LR(0) parsing table
char lr0ParsingTable[6][4] = {
    // Action table
    ' ', 's', 's', ' ',  // State 0
    ' ', ' ', ' ', 'a',  // State 1
    ' ', ' ', ' ', 'b',  // State 2

    // Goto table
    ' ', 2, 3, ' '       // State 0
};

// LR(0) parser function
bool lr0Parser(const string& input) {
    stack<char> stateStack;
    stateStack.push('0');
    size_t inputIndex = 0;

    while (true) {
        char currentState = stateStack.top() - '0';
        char currentInput = input[inputIndex];
        char action = lr0ParsingTable[currentState][currentInput - 'a'];

        if (action == 's') {
            // Shift
            stateStack.push(currentInput);
            stateStack.push(lr0ParsingTable[currentState][currentInput - 'a' + 1]);
            inputIndex++;
        } else if (action == 'r') {
            // Reduce
            int productionIndex = currentInput - '0';
            string production = productions[productionIndex];
            int popCount = production.substr(3).length() * 2;

            for (int i = 0; i < popCount; i++) {
                stateStack.pop();
            }

            char nonTerminal = production[0];
            char nextState = stateStack.top() - '0';
            stateStack.push(nonTerminal);
            stateStack.push(lr0ParsingTable[nextState][nonTerminal - 'S']);
        } else if (action == 'a' && inputIndex == input.length()) {
            // Accept
            cout << "Accepted!" << endl;
            return true;
        } else {
            // Error
            cout << "Error: Invalid input." << endl;
            return false;
        }
    }
}

int main() {
    string input;
    cout << "Enter an input string (a's and b's only): ";
    cin >> input;

    input += '$';  // Add end marker

    if (lr0Parser(input)) {
        cout << "Parsing successful!" << endl;
    } else {
        cout << "Parsing failed." << endl;
    }

    return 0;
}