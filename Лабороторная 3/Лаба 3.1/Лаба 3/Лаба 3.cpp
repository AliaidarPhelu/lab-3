#include "FixedCapacityStack.h"
#include <iostream>

int main() {
    FixedCapacityStack<int> intStack(5); // Создание стека для целых чисел
    FixedCapacityStack<double> doubleStack(10); // Создание стека для чисел с плавающей запятой
    FixedCapacityStack<std::string> stringStack(20); // Создание стека для строк


    // Добавление элементов в стеки
    intStack.push(1);
    doubleStack.push(3.14);
    stringStack.push("Hello");

    // Вывод элементов стеков
    std::cout << "Int Stack: " << intStack << std::endl;
    std::cout << "Double Stack: " << doubleStack << std::endl;
    std::cout << "String Stack: " << stringStack << std::endl;

    return 0;
}
