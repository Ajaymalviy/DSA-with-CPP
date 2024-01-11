array ----> it is a similar type of elements of collection ,which contains contineous memory allocation .
why do we need??_____> if we want to create more than 1000thousand of variable than we are not able create a1,a2,a3....a1000 variable again and again thats why we create array which contain all the variable in single variable entity which is array.like int arr[3000];
memory me ye intger type ka 3000 space continous arrr name ke variable me store kar diya

array creation like ---< int arr[100]; char a[20]; bool a[176]; are the different type of datas array



// Online C++ compiler to run C++ program online ,it start with 0 
#include <iostream>
using namespace std;
int main() {
    int arr[7];
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<"array created successfully"<<endl;
    return 0;
}

// output of this code is ---->
// 0x7ffe5522d3b0 
// array created successfully --->means it take this address in memory



//Creation is done now lets declare value in this 

#include <iostream>
using namespace std;
int main() {
//      int arr[]={2,3,4,2};
//      int arr[3]={2,3,4};
//      int arr[10]={3,4,5,2}
//      int arr[5]={4,5,65,3,,65,6,4,5,6,4} error
     
     
//      arr[5]={2,4,5,3,5} how to find particular element
// //      arr[2]=5 ===arr[index]=value
//      arr+index*datatype----find out the value at particular index
    
    
    
    //lets print a array
        // int name[5]={3,4,5,6,4};
        // for (int i=0;i<5;i++){
        //     cout<<name[i]<<" ";
        // }
        
// lets take input from user in array
    int len;
    cout <<"Enter the size of array:";
    cin>>len;
    int arr[10];
    for (int i=0;i<len;i++){
        cout<<"enter the value at index"<<arr[i];
        cin>>arr[ i];
    }
    
        
        return 0;
}


#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int n;
    cout<<"enter the size of array"<<endl;
    cin >>n;
    cout<<"enter the values for inserting into array";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    cout<<"values in your array are :"<<arr[i];
    cout<<endl;
    }
    return 0;



    //done that makin the values change into whole indices of array 
// #include <iostream>

// using  namespace std;
   
// int main(){
//     int array[]={3,4,5,6,7};
//     for (int i =0;i<5;i++){
//         array[i]=1;
//     }
//     for (int i=0;i<5;i++){
//         cout<<"value of array at whole indexs is "<<array[i]<<endl;
//     }
    
//     return 0;
// }


------------------------------------------------------------------

#include <iostream>

using  namespace std;
   
int main(){

     int arr[10]={2,4};
     for(int i=0;i<10;i++){
         cout<<"value ar index "<<i <<"is : "<<arr[i]<<endl;
     }
    return 0;
}   output of this code is 
value ar index 0is : 2
value ar index 1is : 4
value ar index 2is : 0
value ar index 3is : 0
value ar index 4is : 0
value ar index 5is : 0
value ar index 6is : 0
value ar index 7is : 0
value ar index 8is : 0
value ar index 9is : 0

arr[10]={0} them its ans is 0 at whole index but if we write 1 at 0 then it givess only one at 0 index not whole is one
or agar aa[19]; ko hi print krwanan chaha to garbage value lelega
------------------------------------------------------------------
        in array when we do passing the value then it is always take as call by reference:

// // Online C++ compiler to run C++ program online
#include <iostream>

using  namespace std;
   
   
void print(int arr[],int size){
     for (int i=0;i<size;i++){
         cout<<"values of array are at index: "<<i<<"is:"<<arr[i]<<endl;
         
     }
     cout<<endl;    
}     
void increament(int arr[], int size){
     arr[0]=arr[0]+10;
     print(arr,size);
}  

   
int main(){
    int arr[]={5,6};
    int size=2;
    increament(arr,size);
    print(arr,size);
    return 0;
}

output of this code is   
values of array are at index: 0is:15
values of array are at index: 1is:6

values of array are at index: 0is:15
values of array are at index: 1is:6



SIZE is compulsory to pass with our array without passing this sizeof ,or default take a whole size like arr[19]={3,4,5} now size is 3 but sizeof give  19


---------------------------------------------
GREATEST ELEMENT IN A ARRAY IS 
#include<iostream>
using namespace std;
#include<limits.h>

int maxi=INT_MIN;
int main(){
    int arr[10]={2,5,4,3,6,9,7,8};
    for(int i=0;i<8;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    
    }
    cout<<"maximum element of your array is:"<<maxi;
    
    return 0;
}
-----------------------------------------------------------------------------------
