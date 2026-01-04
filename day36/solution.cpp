// 🚀 Day 36 – Stack Basics (DSA in C++)

// 🧑‍💻 Problem: Implement Stack Using Array
// 🔗 GFG Link:
// https://www.geeksforgeeks.org/problems/implement-stack-using-array/1


class myStack {
  private:
    int *arr;
    int top;
    int size;

  public:
    myStack(int n) {
        size = n;
        arr = new int[n];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int x) {
        if (!isFull()) {
            arr[++top] = x;
        }
    }

    void pop() {
        if (!isEmpty()) {
            top--;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return arr[top];
        }
        return -1;
    }
};
