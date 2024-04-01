#include <iostream>
#include <unordered_map>

class SymbolTable {
private:
    std::unordered_map<std::string, int> symbols;

public:
    void insert(std::string name, int value) {
        symbols[name] = value;
    }

    void modify(std::string name, int new_value) {
        if (symbols.find(name) != symbols.end()) {
            symbols[name] = new_value;
        } else {
            std::cout << "Error: Symbol '" << name << "' not found." << std::endl;
        }
    }

    int search(std::string name) {
        if (symbols.find(name) != symbols.end()) {
            return symbols[name];
        } else {
            return -1; // Return -1 to indicate symbol not found
        }
    }

    void display() {
        std::cout << "Symbol Table:" << std::endl;
        for (const auto& entry : symbols) {
            std::cout << entry.first << ": " << entry.second << std::endl;
        }
    }
};

int main() {
    SymbolTable table;

    table.insert("x", 10);
    table.insert("y", 20);
    table.insert("z", 30);

    table.display();

    table.modify("y", 50);
    table.modify("w", 60);  // This will print an error message.

    int value_x = table.search("x");
    int value_w = table.search("w");

    std::cout << "x: " << value_x << std::endl;
    std::cout << "w: " << value_w << std::endl;

    int choice;
    std::string symbolName;
    int symbolValue;

    do {
        std::cout << "\nSelect an option:\n";
        std::cout << "1. Insert symbol\n";
        std::cout << "2. Search symbol\n";
        std::cout << "3. Modify symbol\n";
        std::cout << "4. Display symbol table\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter symbol name: ";
                std::cin >> symbolName;
                std::cout << "Enter symbol value: ";
                std::cin >> symbolValue;
                table.insert(symbolName, symbolValue);
                break;

            case 2:{
                std::cout << "Enter symbol name to search: ";
                std::cin >> symbolName;
                int result = table.search(symbolName);
                if (result != -1)
                    std::cout << "Symbol " << symbolName << " found with value " << result << std::endl;
                else
                    std::cout << "Symbol " << symbolName << " not found." << std::endl;
                break;
            }

            case 3:
                std::cout << "Enter symbol name to modify: ";
                std::cin >> symbolName;
                std::cout << "Enter new symbol value: ";
                std::cin >> symbolValue;
                table.modify(symbolName, symbolValue);
                break;

            case 4:
                table.display();
                break;

            case 0:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);


    return 0;
}