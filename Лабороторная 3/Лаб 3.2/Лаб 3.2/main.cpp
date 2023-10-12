#include <iostream>
#include "Stack.h"

int main() {
    Stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top: " << stack.getTop() << std::endl;
    std::cout << "Size: " << stack.getSize() << std::endl;

    while (!stack.empty()) {
        std::cout << "Pop: " << stack.pop() << std::endl;
    }

    return 0;
}
