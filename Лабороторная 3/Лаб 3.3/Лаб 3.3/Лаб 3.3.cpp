#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& s) {
    std::stack<char> stack;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push(c);
        }
        else {
            if (stack.empty()) {
                return false; // Нет соответствующей открывающей скобки
            }

            char top = stack.top();
            stack.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false; // Скобки не соответствуют друг другу
            }
        }
    }

    return stack.empty(); // Все скобки соответствуют друг другу
}

int main() {
    std::string input;
    std::cin >> input;

    if (isBalanced(input)) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
