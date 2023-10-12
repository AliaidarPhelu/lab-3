#ifndef FIXEDCAPACITYSTACK_H
#define FIXEDCAPACITYSTACK_H

#include <iostream>

template <typename T>
class FixedCapacityStack {
private:
    T* a;         // Массив, содержащий элементы стека
    int n;        // Количество элементов в стеке
    int capacity;  // Емкость стека

public:
    FixedCapacityStack(int capacity);  // Конструктор
    ~FixedCapacityStack();             // Деструктор
    bool empty() const;               // Проверка на пустоту стека
    bool full() const;                // Проверка на полноту стека
    void push(T item);                // Добавить элемент в стек
    T pop();                           // Удалить вершину стека
    T top() const;                     // Вернуть значение вершины стека
    friend std::ostream& operator<<(std::ostream& os, const FixedCapacityStack& st);
};

#endif // FIXEDCAPACITYSTACK_H
