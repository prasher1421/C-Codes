#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int countWordOccurrences(const string& input, const string& word) {
    int count = 0;
    size_t pos = 0;
    
    while ((pos = input.find(word, pos)) != string::npos) {
        count++;
        pos += word.length();
    }
    
    return count;
}

int countSubstringOccurrences(const string& input, const string& substring) {
    int count = 0;
    size_t pos = 0;
    
    while ((pos = input.find(substring, pos)) != string::npos) {
        count++;
        pos += substring.length();
    }
    
    return count;
}

bool isSubsequence(const string& input, const string& subsequence) {
    size_t sub_pos = 0;
    
    for (char c : input) {
        if (c == subsequence[sub_pos]) {
            sub_pos++;
            if (sub_pos == subsequence.length()) {
                return true;
            }
        }
    }
    
    return false;
}

int countSubsequenceOccurrences(const string& input, const string& subsequence) {
    int count = 0;
    size_t pos = 0;
    
    while ((pos = input.find(subsequence, pos)) != string::npos) {
        if (isSubsequence(input.substr(pos + 1), subsequence))
            count++;
        pos++;
    }
    
    return count;
}

int main() {
    string input;
    cout << "Enter the input string: ";
    getline(cin, input);
    
    string search;
    cout << "Enter the word, string, or subsequence to search for: ";
    getline(cin, search);
    
    int wordCount = countWordOccurrences(input, search);
    int substringCount = countSubstringOccurrences(input, search);
    int subsequenceCount = countSubsequenceOccurrences(input, search);
    
    cout << "Occurrences of '" << search << "':" << endl;
    cout << "As a word: " << wordCount << endl;
    cout << "As a substring: " << substringCount << endl;
    cout << "As a subsequence: " << subsequenceCount << endl;
    
    return 0;
}