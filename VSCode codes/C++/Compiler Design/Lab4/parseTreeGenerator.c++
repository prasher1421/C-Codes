#include <iostream>
#include <stack>
#include <cctype>
#include <string>

struct TreeNode {
    char value;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(char val) : value(val), left(nullptr), right(nullptr) {}
};

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool isParenthesis(char c) {
    return (c == '(' || c == ')');
}

int getPrecedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

TreeNode* buildParseTree(const std::string& expression) {
    // ... (same as before)
}

void printParseTree(TreeNode* node, std::string prefix = "", bool isLeft = true) {
    if (node) {
        std::cout << prefix;
        std::cout << (isLeft ? "├──" : "└──");
        std::cout << node->value << std::endl;

        printParseTree(node->left, prefix + (isLeft ? "│   " : "    "), true);
        printParseTree(node->right, prefix + (isLeft ? "│   " : "    "), false);
    }
}

int main() {
    std::string infixExpression;
    std::cout << "Enter an infix expression: ";
    std::getline(std::cin, infixExpression);

    TreeNode* root = buildParseTree(infixExpression);
    
    std::cout << "Parse Tree:" << std::endl;
    printParseTree(root);


    return 0;
}
