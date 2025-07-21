#include<iostream>
using namespace std;
#include<queue>
class CircularQueue{
private:
    int * arr, size, front, rear, capacity;

public:
    CircularQueue(int capacityyy){
        capacity=capacityyy;
        arr=new int[capacity];
        front =-1;  //circular me ye -1 hai nito 0 hota hai in general.
        rear=-1;
        size=0;

    }


    void enqueue(int data){
        if (isfull()){
            cout<<"queue is full ";
            return ;
        }
        if(front==-1)front=rear=0;
        rear=(rear+1)%capacity;
        arr[rear]=data;
        size++;
        rear++;

    }
    void dequeue(){
        if (isempty()){
            cout<<"queue is empty ";
            return ;
        }
        if(front==0)front=-1;
        front=(front+1)%capacity;
        // front--;
        size--;
        if (size ==0){
            front=rear=-1;
        }
    }

    bool isfull(){
        return size==capacity;        
    }

    bool isempty(){
        return size==0;        
    }

    void display() {
        if (isempty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue contents: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main(){
    CircularQueue q(5);
    q.enqueue(23);
    q.enqueue(33);
    q.enqueue(43);
    q.enqueue(24);
    q.enqueue(14);
    q.display();
    q.dequeue();
    q.display();
}