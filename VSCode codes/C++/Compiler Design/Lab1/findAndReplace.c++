#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
void replaceWordInLine(string& line, const string& targetWord, const string& newWord, int& occurrences) {
    size_t pos = 0;
    while ((pos = line.find(targetWord, pos)) != string::npos) {
        occurrences++;
        line.replace(pos, targetWord.length(), newWord);
        pos += newWord.length();
    }
}

int main() {
    string filename;
    cout << "Enter the file name: ";
    getline(cin, filename);

    string targetWord, newWord;
    cout << "Enter the word to replace: ";
    cin >> targetWord;
    cout << "Enter the new word: ";
    cin >> newWord;

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Unable to open the file " << filename << endl;
        return 1;
    }

    string outputFilename = "output.txt"; // Name of the new file
    ofstream outputFile(outputFilename);

    if (!outputFile) {
        cerr << "Error: Unable to create the output file." << endl;
        return 1;
    }

    string line;
    int totalOccurrences = 0;

    while (getline(inputFile, line)) {
        int occurrences = 0;
        replaceWordInLine(line, targetWord, newWord, occurrences);
        totalOccurrences += occurrences;
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    // Rename the output file to the original file (optional)
    if (rename(outputFilename.c_str(), filename.c_str()) != 0) {
        cerr << "Error: Failed to rename the output file." << endl;
        return 1;
    }

    cout << "Number of occurrences of '" << targetWord << "': " << totalOccurrences << endl;

    return 0;
}