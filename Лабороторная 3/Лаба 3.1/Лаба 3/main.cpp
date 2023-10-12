#include "FixedCapacityStack.h"
#include <iostream>

template <typename T>
FixedCapacityStack<T>::FixedCapacityStack(int capacity) {
    a = new T[capacity];
    n = 0;
    this->capacity = capacity;
}

template <typename T>
T FixedCapacityStack<T>::pop() {
    if (!empty()) {
        return a[--n];
    }
    // Здесь можно вернуть специальное значение или бросить исключение при попытке извлечь из пустого стека.
    return T(); // Вернет значение по умолчанию для типа T.
}
// Остальные методы также обновляются аналогичным образом.

