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
    // ����� ����� ������� ����������� �������� ��� ������� ���������� ��� ������� ������� �� ������� �����.
    return T(); // ������ �������� �� ��������� ��� ���� T.
}
// ��������� ������ ����� ����������� ����������� �������.

