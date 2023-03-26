// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
private:
    T arr[size];
    int top;
public:
    TStack(): top(-1){}
    void Push(T& value) {
        if (!isFull()) {
            arr[++top] = value;
        }
    }
    T get() const {
        if (!isEmpty()) {
            return arr[top];
        }
    }
    T pop() {
        if (!isEmpty()) {
            return arr[top--];
        }
    }
    int GetTop() const { return top; }
    bool isEmpty() const {
        return top == -1;
    }
    bool isFull() const {
        return top == size;
    }
};

#endif  // INCLUDE_TSTACK_H_
