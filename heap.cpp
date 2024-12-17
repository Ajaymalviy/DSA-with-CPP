//heap is nothing it is just a complete binary search tree that comes with a heap order property .there are two type of 
//heap max and min.2 types
//max heap= parent node>child node,
//min heap=parent node <child node se

//works in the form of array or implement using array.

//let's insert element in the heap .

#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    void insert(int val){
        size=size+1;
        int index = size;
        arr[index]=val;

        while(index>1){ //qukii hame root se check karna h jo ki abhi 1 hi hoga .
        int parent_ka_index_nikala=index/2;
        //ab sidhe check karlo if parent agr chota h element se to swap kar denge,
        if(arr[parent_ka_index_nikala]<arr[index]){
            //to swap kar dete hai
            swap(arr[parent_ka_index_nikala], arr[index]);
            //or qki ho sakta h ye swap se sirf last filling sahi huii ho to aage ki bhi check karni padegii usi element se 
            index=parent_ka_index_nikala;
        }
        else{
            //nito sidhe khali chhod do
            return;

        }
        }
    }

    void delete_heap(){
        if(size==0){
            cout<<"array is empty no need to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size --;
        //size bhi kam kar di or root ko last se swap bhi kar diya to ab left right se compare or kar lena h
        int i=1;
        int left_element=2*i;
        int right_element=2*i+1;
        
        while(i<size){
            if(arr[i]<arr[left_element]){
                swap(arr[i],arr[left_element]);
            }
            else if(arr[i]<arr[right_element]){
                swap(arr[i],arr[right_element]);
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" "<<endl;
        }
    }




};

        void heapify(int arr[], int n, int i){//n means size , i matlb kaha se kaha tak k array ko heapify karna h.
            int largest = i;
            int left_element=2*i;
            int right_element=2*i+1;
            if(left_element<=n && arr[largest]<arr[left_element]){
                largest=left_element;
            }
            if(right_element<=n && arr[largest]<arr[right_element]){
                largest=right_element;
            }
            
            if(largest != i){
                swap(arr[largest],arr[i]);
                heapify(arr, n, i);
            }

        }


void heap_sort(int arr[], int n) {
    // Build the max heap first
    for (int i = n / 2; i > 0; i--) {
        heapify(arr, n, i);
    }

    // One by one extract elements from heap
    while (n > 1) {
        swap(arr[1], arr[n]);
        n--;  // Decrease the heap size
        heapify(arr, n, 1);  // Call heapify on the reduced heap
    }
}


    int main(){
        heap h;
        h.insert(15);
        h.insert(16);
        // h.insert(17);
        // h.insert(22);
        h.print();
        h.delete_heap();
        cout<<"after deletion"<<endl;
        h.print();
        int arr[8]={-1, 33,45,7,12,15,6,8};
        int n =8;
        //heap ka creation ho gya.
        for(int i= n/2; i>0; i--){

            heapify(arr, n, i);
        }
        cout<<"answer of heapify"<<endl;
        for(int i=1; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;


        cout<<"now apply heap sort on provided heap by heapify"<<endl;
        heap_sort(arr, n);
        cout<<"answer of heap sort"<<endl;
        for(int i=1; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;


        return 0;
    }