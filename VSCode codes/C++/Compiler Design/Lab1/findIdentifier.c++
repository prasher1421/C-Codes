#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    string sourceCode;

    // Replace the following block with actual C++ source code
    sourceCode = R"(
        #include <iostream>
        using namespace std;

        int main() {
            int num1 = 10;
            int num2 = 20;
            int result = num1 + num2;

            cout << "The result is: " << result << endl;
            return 0;
        }
    )";

    // Regular expression to match valid C++ identifiers
    std::regex identifierRegex("[a-zA-Z_][a-zA-Z0-9_]*");

    std::sregex_iterator iter(sourceCode.begin(), sourceCode.end(), identifierRegex);
    std::sregex_iterator end;

    std::cout << "Identifiers found in the source code:\n";
    while (iter != end) {
        std::cout << iter->str() << "\n";
        ++iter;
    }

    return 0;
}
