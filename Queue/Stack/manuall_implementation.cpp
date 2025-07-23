#include<iostream>
using namespace std;

// Stack implementation using array
class Stack {
private:
    int size, top;
    int* arr;

public:
    Stack(int s) {
        this->size = s;      // Corrected this line
        arr = new int[size];
        top = -1;
    }

    ~Stack() {
        delete[] arr;  // Freeing dynamically allocated memory
    }

    void push_element(int data) {
        if (top == size - 1) {
            cout << "Stack is full" << endl;
            return;
        } else {
            top++;
            arr[top] = data;
        }
    }

    void pop_element() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        } else {
            top--;
        }
    }

    int peek() {
        if (top >= 0)
            return arr[top];
        else {
            cout << "Stack is empty" << endl;
            return -1; // Indicates empty
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }
};


int main() {
    Stack s(3);
    s.push_element(10);
    s.push_element(20);
    s.push_element(30);
    s.push_element(40); // Should say "Stack is full"

    cout << "Top element: " << s.peek() << endl; // Should print 30

    s.pop_element();
    cout << "Top after pop: " << s.peek() << endl; // Should print 20

    return 0;
}
