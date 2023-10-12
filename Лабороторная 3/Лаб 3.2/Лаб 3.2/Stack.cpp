template <typename T>
Stack<T>::Stack() : top(nullptr), size(0) {}

template <typename T>
bool Stack<T>::empty() const {
    return size == 0;
}

template <typename T>
int Stack<T>::getSize() {
    return size;
}

template <typename T>
void Stack<T>::push(const T& item) {
    ListNode<T>* newNode = new ListNode<T>(item);
    newNode->next = top;
    top = newNode;
    size++;
}

template <typename T>
T Stack<T>::pop() {
    if (empty()) {
        throw std::runtime_error("Stack is empty");
    }

    T data = top->data;
    ListNode<T>* temp = top;
    top = top->next;
    delete temp;
    size--;
    return data;
}

template <typename T>
T Stack<T>::getTop() const {
    if (empty()) {
        throw std::runtime_error("Stack is empty");
    }

    return top->data;
}
