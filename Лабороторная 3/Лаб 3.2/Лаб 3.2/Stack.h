#ifndef STACK_H
#define STACK_H

#include "ListNode.h"

template <typename T>
class Stack {
private:
    ListNode<T>* top;
    int size;

public:
    Stack();
    bool empty() const;
    int getSize();
    void push(const T& item);
    T pop();
    T getTop() const;
};

#include "Stack.cpp"

#endif
