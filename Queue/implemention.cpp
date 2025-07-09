#include<iostream>
using namespace std;

class Queue{
private:
    int* arr;
    int front, rare, size, capacity;

public:
    Queue(int cap){
        capacity=cap;
        size=0;
        arr=new int[capacity];
        front=0;
        rare=-1;
    }


    void eneque(int data){
        if (isFull()){
            cout<<"queue is full";
            return;
        }
        else{
            rare++;
            arr[rare]=data;
            size++;
            
        }
    }
    void dequeue(){
        if (isempty()){
            cout<<"queue is empty";
            return ;

        }
        else{
            front++;
            size--;
        }
    }

    int frontele(){
        if (isempty()){
            cout<<"queue is empty\n";
            return -1;
        }
        return arr[front];
    }
    bool isFull(){
        return size==capacity;
    }
    bool isempty(){
        return size==0;
    }

    void display() {
        if (isempty()) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i <= rare; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    ~Queue(){
        delete[] arr;

    }
};
int main() {
    Queue q(5);

    q.eneque(10);
    q.eneque(20);
    q.eneque(30);

    q.display();         // 10 20 30
    cout << q.frontele() << "\n";  // 10

    q.dequeue();
    q.display();         // 20 30

    return 0;
}