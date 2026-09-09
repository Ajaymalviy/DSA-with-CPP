vector<vector<vector<int>>> v(
    3, vector<vector<int>>(
        4, vector<int>(5, 0)
    )
);
// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     int arr[100];
//     int top;
//     int m;  // maximum stack size

// public:
//     Stack(int size) {
//         m = size;
//         top = -1;
//     }

//     void push(int x) {
//         if (top == m - 1) {
//             cout << "Stack Overflow\n";
//             return;
//         }

//         arr[++top] = x;
//     }

//     void pop() {
//         if (top == -1) {
//             cout << "Stack Underflow\n";
//             return;
//         }

//         top--;
//     }

//     int peek() {
//         if (top == -1) {
//             cout << "Stack is empty\n";
//             return -1;
//         }

//         return arr[top];
//     }

//     bool empty() {
//         return top == -1;
//     }
// };

// int main() {
//     int m = 5;

//     Stack st(m);

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout << st.peek() << endl;  // 30

//     st.pop();

//     cout << st.peek() << endl;  // 20
// }

class Stack {
    int *arr;
    int top;
    int m;

public:
    Stack(int n, int m) {
        arr = new int[n];
        this->m = m;
        top = -1;
    }

    void push(int x) {
        if (top == m - 1) {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        return (top == -1) ? -1 : arr[top];
    }

    ~Stack() {
        delete[] arr;
    }
};
