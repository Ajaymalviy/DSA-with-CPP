// //vector --> It is a dynamic array where its default value is 0,and its syntax is [  , vector<int>nameofvector,   ]
// sidhi bhaasa me vector ek dyamic array h jiski size full hone par agr kuch append kare to wo khudki size ko uske double kar leta hai ..... ,

// //kese banta hai 
//    // vector<int>arr(2,4,5,6,1);
//     // vector<int>arr(10,-1);
//     now ,// int n 
//     // cin >>n;
//     int arr[n] toh ye best practice ni h iske bajay agr ham yehi apn vector me kare to koi dikkat ni rahegi
//     //vector<int>arr(n);


//     //array me append or remove karna hai to apn karenge ese
//     //-----> append==push_back
//     //----->remove==pop_back
//     //arr.push_back(5)
//     //arr.size()
//     //arr.empty() (T/F)
//     //arr.pop_back(5)
//     //arr.pop_back(5)

// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
	//create a vector
	// vector<int>arr;


    //if i want to intialise array with same element than we can do like :
//vector<int>arr(10,-11);

	// cout<<arr.size()<<endl;
	// cout<<arr.capacity()<<endl;
	//insert an element in array 
	// cout<<"array before inserting an element"<<endl;
	// arr.push_back(7);
	// arr.push_back(4);
	// arr.push_back(6);
	// for(int i=0;i<arr.size();i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	// //remove an element from an array
	// arr.pop_back();
	// cout<<"array after pop a element"<<endl;
	// for(int i=0;i<arr.size();i++){
	// 	cout<<arr[i]<<" ";
	// }

    // cout<<endl;

    // cout<<endl;
    // cout<<"new array whose name is ajay contain:"<<endl;
    // vector<int>ajay{2,3,4,5,6};
    // for(int i=0;i<ajay.size();i++){
    // 	cout<<ajay[i] <<" ";
    // }

   //  cout<< "is that ajay is empty or not ,lets see using empty fucn:  "<<ajay.empty()<<endl;
   // // create an array with user define size

   //  cout<<endl;

   // int n;
   // cout<<"enter the size of array which you want to initialse 5 in its every index : ";
   // cin>>n;
   // vector<int>crr(n,5);
   // cout<<"new array is :";

   // for(int i=0;i<crr.size();i++){
   // 		cout<<crr[i]<<" ";
   // }


   //------------------------------------------------------------------------------------------------


   // Questions---->

        //we have a array which contains elements as every elements comes two times in a array ,but only one element comes 
        //at once only . how  to find it ?
        // we can use  XOR operator to solve this question 
      // it works as if we have 1,3,4,5,1,3,5 then it cut all same element with each other and find one which is not match with anyone.
       // vector<int>example{2,4,5,6,7,4,2,6}

// #include<iostream>
// using namespace std;
// #include<vector>

// int findelemint(vector<int>array){
// 	int answer=0;
// 	for (int i=0;i<array.size();i++){
// 		answer=answer ^ array[i];

// 	}
// 	return answer;
	
// }


// int main(){
//     int n;
//     cout<<"Enter the size of vector: ";
//     cin>>n;
//     vector<int>array(n);
//     cout<<endl;
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<array.size();i++){
//     	cin>>array[i];
    
//     }
//     int unique=findelemint(array);
//     cout<<endl;
//     cout<<"unique element is:"<<unique ;
// 	return 0;
// }



// Question---->find a union of two arrays :::
//lets solve this 
#include<iostream>
using namespace std;
#include <vector>

int main(){
	int arr[]={2,3,4,5,1};
	int sizea=5;
	int brr[]={6,7,8,9};
	int sizeb=4;
	vector<int>storage;
	for(int i=0;i<sizea;i++){
		storage.push_back(arr[i]);
	}
    for(int i=0;i<sizeb;i++){
		storage.push_back(brr[i]);

	}
    cout<<"printing the union of two arrays are:";
	for (int i=0;i<storage.size();i++){
		cout<<storage[i]<<" ";
	}


}