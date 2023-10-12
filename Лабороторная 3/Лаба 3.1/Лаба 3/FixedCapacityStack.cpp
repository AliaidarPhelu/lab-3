#include "FixedCapacityStack.h"
FixedCapacityStack::FixedCapacityStack(int capacity) {
    a = new int[capacity];
    n = 0;
}
FixedCapacityStack::~FixedCapacityStack() {
    delete[] a;
}
bool FixedCapacityStack::empty() const {
    return n == 0;
}

bool FixedCapacityStack::full() const {
    return n == capacity;
}
void FixedCapacityStack::push(int item) {
    if (!full()) {
        a[n++] = item;
    }
}
int FixedCapacityStack::pop() {
    if (!empty()) {
        return a[--n];
    }
    return -1;
}
int FixedCapacityStack::top() const {
    if (!empty()) {
        return a[n - 1];
    }
    throw std::out_of_range("Stack is empty");
}
std::ostream& operator<<(std::ostream& os, FixedCapacityStack& st) {
    for (int i = 0; i < st.n; i++) {
        os << st.a[i] << "\n";
    }
    return os;
}
