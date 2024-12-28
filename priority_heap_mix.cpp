#include<iostream>
#include<functional>
#include<vector>
#include<queue>
using namespace std;


int main(){
    // plus<int> aj;
    // int sum = aj(3,4);
    // cout<<"ye dikh rhaa "<<sum<<endl;
   
    // minus<int>minus;
    // int res=minus(2,2);
    // cout<<"result of minus is "<<res<<endl;

    // divides<int>devide;
    // int ress=devide(5,4);
    // cout<<"divide result is "<<ress<<endl;
    
    // multiplies<float>mult;
    // float resutl=mult(1.8,2);
    // cout<<"result of mutliple is "<<resutl<<endl;
    priority_queue<int>pq;
    cout<<"queue for max -heap"<<endl;
    pq.push(45);
    pq.push(4);
    pq.push(35);
    pq.push(15);
    pq.push(33);
    while(!pq.empty()){
        cout<<" "<<pq.top()<<endl;
        pq.pop();

    }
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(11);
    min_heap.push(54);
    min_heap.push(135);
    min_heap.push(63);        
    min_heap.push(99);
    min_heap.push(23);  
    cout<<"new queue for min heap is like " <<endl;
    while(!min_heap.empty()){
    cout<<" "<<min_heap.top()<<endl;
    min_heap.pop();
    }     


    vector<int>arr={3,54,23,4,5,32,11,22,34,8};
    priority_queue<int>make_heap(arr.begin(), arr.end());
    cout<<"array changes into heap like "<<endl;
    while(!make_heap.empty()){
        cout<<" "<<make_heap.top()<<endl;
        make_heap.pop();
    }  


    return 0 ;
}
