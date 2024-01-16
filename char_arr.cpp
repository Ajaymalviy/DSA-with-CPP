//as same as   int arr[10];  likhne se jab memory me 10 block ki size space create ho jati h ,same as for charater storage we create 
//character array 
//declearation ------> char arr[10];
//if our wish to store the characte like 'a' into int arr[] we can do because a also contain any ascii value internally.
//but there is best practice to store character use charcter type array.
// It takes 1-byte in memory space and its value varies in b/w -127 to 128 , or -2^7 ot 2^7-1.


//when i take in int arr [20];
//i use cin>>arr[2] for 3rd index  [n] for n-1 index ,and whatever but at a time only taken one integer 
//but in case of char i can take whole string as a character :
//lets see how?


#include<iostream>
using namespace std;
int main(){
    char name[100];
    cout<<"enter your name :  ";
    cin>>name;
    cout<<"your name is "<< name << " thanks for asking :"<<endl;
    //another way of taking same as from cin which is single single character .
    //  name[0]='a';
    //  name[1]='b';
    // cin>>name[2];
    // cout<<name[0]<< " "<<name[1]<< " "<<name[2]<< endl;
     //we can take whole inpute as string by using for loop 

//----------------------------------------------------------------
// concept of char arr is that if we take arr of size 100 and give only 10 character as a string then rest of the space is 
// takes garbage value after this string of 10 value only one more space is default come whose name is '/0' null character 
//after this character we get garbage values:
 
 //how do we know that after completing a sting default taking a place by null pointer 
 //lets se 
 //on taking name into 100 of string we give the name is AJAY which takes 4 places, and then we print the next means 
 //name[4 ] index print if we does not got anthing then we typecast into a int then print again .
    // for(int i=0;i<6;i++){
    //     cout<<"value at index "<<i<<" is "<<name[i];
    //     cout<<endl;
    // }  
    // int value= int(name[4]);
    // cout<<"value is at 5th index is" <<value;
//--------------------------------------------------------
  
   //remember if we use space , tab or any  _ underscore then cin does not take it all three it left after the value of this three.

}

