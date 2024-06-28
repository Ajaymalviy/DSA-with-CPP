#include<iostream>
using namespace std;

int main(){
   std::cout<<"jelo";
   int num=4;
   cout<<num<<endl;
   cout<<"address of this num variable in memory is "<<&num<<endl;


    // where address of operator is & , jo ki actuall location btata hai address ki.in memory.
   // always in hexadecimal

   // ab aata hai pointer jo ki memory me ek container bna hoga jisme 4 rakha hai uska name num hai, jiska address kuch x239838dffff esa that 
   // us address ko bhi kisi container me rakh diya jaye ya koi container jo is address ko rakh leta hai usko pointer bolte hai
   //declearation of pointer is 
   // int *ptr; bad practice of empty pointer initialize it even with a zero which become a null pointer .
   int *ptr=&num;
   cout<<"value of *ptr is "<<*ptr<<endl; //means me value check kar raha hu ptr ki , kya value hai uske ander. isme 4 aayegi queki 4 uski value hai na ki address 
   //isko d reference operator bolte hai.
   //agr ptr print kare to wo address tha but apn ne to * lga diya aage mtlb ki addreess nahi value konsi hai is address par.{num or *ptr gives same ans}

   
   double m=4.3;
   double *p1=&m;
   cout<<"address of m is "<<&m<<endl;
   cout<<"address of p1 is "<<p1<<endl;
   cout<<"value of m is "<<*p1<<endl;

   cout<<endl;
   cout<<"size of integer is "<<sizeof(num)<<endl;
   cout<<"size of pointer is "<<sizeof(ptr)<<endl; //it returns 8 byte why??
   cout<<"size of pointer in double value "<<sizeof(m)<<endl; //means it is always getting value which is 8byte .
   cout<<endl;


   //another way to initialise this 
   int number=10;
   int *pointer = 0;
   pointer =  &number;
   cout	<<"value of number is "<<number<<endl;
   cout	<<"value of pointer is "<<*pointer<<endl;
   cout	<<"address  of number is "<<&number<<endl;
   cout	<<"address of pointer is "<<pointer<<endl;
    
   cout<<endl;


     //now new thing is that copy or reference.


   int a=213;
   cout<<"value of a at first "<<a<<endl;

   int temp =a;
   temp ++;
   cout<<"value of temp now "<<temp<<endl;
   cout<<"value of a is now "<<a<<endl;   

    //with the help of pointer is that
    // cout<<endl;
    // int *p2 = &a;
    // cout<<"before increment value of *p is "<<*p2<<endl;
    // *p2 = (*p2)++;
    // cout<<"after increment *p "<<*p2<<endl;
   	// return 0;

   	cout<<endl;
    int *p2 = &a;
    cout<<"before increment value of *p is "<<a<<endl;
    *p2 =(*p2)++;
    cout<<"after increment *p "<<a<<endl;

    cout<<endl;
    //coping a address
    int *q = p2;
    cout<< p2 <<"-"<<q<<endl;
    cout<< *p2 <<"-"<< *q<<endl;  //sabkuch same same !!


    cout<<endl;

   
   int arr[10] = {1,4,3};
   //how to find address of 1 --> there is 2 ways of this..
   cout<<"address at first index of array " << arr <<endl;
   cout<<"address at first index of array " << &arr[0]<<endl;
   cout<< "after increment of arr " << (*arr) +1<< endl;
   cout<< "after increment in another ways is " <<*(arr+1)<<endl; 
   //arr[i] = *(arr + i) correct
   //i[arr] = *(i + arr) incorrect

   	return 0;
}


The integration of Django with Celery and Redis/RabbitMQ forms a powerful architecture for handling asynchronous tasks in modern web applications. This setup leverages the producer-consumer pattern to decouple task creation from execution, thereby optimizing application performance and user experience. By utilizing Celery as the task queue manager and Redis/RabbitMQ as the message broker, tasks are efficiently serialized, queued, and processed by workers in the background. This architecture supports scalability, concurrency, and reliability, crucial for managing long-running tasks without impacting the responsiveness of the main application. With the ability to store task results in various backends like databases, it ensures that tasks are executed and results are managed effectively, contributing to the robustness of distributed systems. Overall, the Django-Celery-Redis/RabbitMQ combination provides a flexible and efficient solution for managing asynchronous operations in web development, enhancing productivity and scalability across diverse application scenarios.
