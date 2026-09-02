#include <iostream>
using namespace std;

class TwoStacks {
    int *arr;
    int size;
    int top1, top2;

public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];

        top1 = -1;
        top2 = n;
    }

    // Stack 1
    void push1(int x) {
        if (top1 + 1 == top2) {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top1] = x;
    }

    // Stack 2
    void push2(int x) {
        if (top1 + 1 == top2) {
            cout << "Stack Overflow\n";
            return;
        }

        arr[--top2] = x;
    }

    // Pop Stack 1
    int pop1() {
        if (top1 == -1) {
            cout << "Stack 1 Underflow\n";
            return -1;
        }

        return arr[top1--];
    }

    // Pop Stack 2
    int pop2() {
        if (top2 == size) {
            cout << "Stack 2 Underflow\n";
            return -1;
        }

        return arr[top2++];
    }

    ~TwoStacks() {
        delete[] arr;
    }
};

int main() {

    TwoStacks st(10);

    st.push1(10);
    st.push1(20);
    st.push1(30);

    st.push2(50);
    st.push2(60);
    st.push2(70);

    cout << st.pop1() << endl;  // 30
    cout << st.pop1() << endl;  // 20

    cout << st.pop2() << endl;  // 70
    cout << st.pop2() << endl;  // 60

    return 0;
}
