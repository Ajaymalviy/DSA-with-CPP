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
// #include<iostream>
// using namespace std;
// #include <vector>

// int main(){
// 	int arr[]={2,3,4,5,1};
// 	int sizea=5;
// 	int brr[]={6,7,8,9};
// 	int sizeb=4;
// 	vector<int>storage;
// 	for(int i=0;i<sizea;i++){
// 		storage.push_back(arr[i]);
// 	}
//     for(int i=0;i<sizeb;i++){
// 		storage.push_back(brr[i]);

// 	}
//     cout<<"printing the union of two arrays are:";
// 	for (int i=0;i<storage.size();i++){
// 		cout<<storage[i]<<" ";
// 	}


// }


//Qusetion----> how to find an intersection of two arrays:
// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
// 	int arr[]={2,5,6,5,8};
// 	int sizea=5;
// 	int brr[]={4,6,5,7};
// 	int sizeb=4;
// 	vector<int>store;
// 	for (int i=0;i<sizea;i++){
// 		for (int j=0;j<sizeb;j++){
// 			if (arr[i]==brr[j]){
// 				store.push_back(arr[i]);
// 			}
// 		}
// 	}
// 	for(int k=0;k<store.size();k++){
// 		cout<<store[k];
// 	}
	
// }
//age same elements single array me hi aa gya to problem aa jayega ,how to resolve:
// toh fir hame mark kar denge jo mil gya use brr[j] ko -1 se initialise kar do



// int main(){
// 	int arr[]={2,5,6,5,8};
// 	int sizea=5;
// 	int brr[]={4,6,5,7};
// 	int sizeb=4;
// 	vector<int>store;
// 	for (int i=0;i<sizea;i++){
// 		for (int j=0;j<sizeb;j++){
// 			if (arr[i]==brr[j]){
// 				brr[j]=-1;//bhalehi int_min kar likh do agr SAabhi negative a gye toh
// 				store.push_back(arr[i]);
// 			}
// 		}
// 	}
// 	for(int k=0;k<store.size();k++){
// 		cout<<store[k];
// 	}
	
// }

//same question karna hai for union k liye 
//now lets do another question


//______________--------------------_____________________________-------------------------------------_______________________---


//Question----->  pari sum wale matlab  ,ki sum hame de rakha h =9 ,kisi bhi 2 elemnts ka sum 
//jo ki nine ho wo return kardo.

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {3, 4, 5, 6, 7, 8};
//     int size = 6;
//     int sum = 9;
//     int diff;

//     for(int i = 0; i < size; i++) {
//         diff = sum - arr[i];
        
//         for(int j = i + 1; j < size; j++) {
//             if (diff == arr[j]) {
//                 cout << "Two elements whose sum is 9 are: " << arr[i] << " and " << arr[j] << endl;
//                 return 0;
//             }
//         }
//     }

//     cout << "No such elements found." << endl;
//     return 0;
// }

//another way to find same problem::::


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// 	int sum=9;
// 	vector<int>arr{2,3,4,5,6,7,8,0,4};        //size method vector par lagti h na ki array par..
// 	for(int i=0 ; i<arr.size(); i++){
// 		for (int j=i+1 ; j<arr.size() ; j++){
// 			if(arr[i]+arr[j] == sum){
// 				cout<<"if we add both number "<<arr[i] << " and " << arr[j]<<"then we get 9"<<endl;
// 			}
// 		}

// 	}
// }

//same question trivlet k liye bhi puch sakte hai or four sum k liye bhi to bas looops bada do that`s end.

//------------------------------------------------Next---------------------------------------------------------------------

//Question----->

//leetcode easy question in night ::::::12 january 2024
// class Solution:
//     def halvesAreAlike(self, s: str) -> bool:
//         l=list(s)
//         countf=0
//         counts=0
//         vowels= ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
//         mid=len(l)//2
//         for i in range(0,mid+1):
//             if i in vowels:
//                 countf +=1
             
//         for i in range (mid+1, len(l)):
//             if i in vowels:
//                 counts +=1
            
//         if countf==counts:
//             return True
//         else :
//             return False
//-----------------------------------------------Next----------------------------------------------------------------------
// Question---->

//sort zero and one in form where start contain zeros and last contain ones.
//lets solve this 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// 	vector<int>arr{0,1,1,0,0,0,1,0,0,1,1,0,0,1};
// 	int start=0;
// 	int end=arr.size()-1;
// 	int i=0;
// 	while(i != end){
// 		if(arr[i]==0){
// 			swap(arr[i],arr[start]);
// 			start++;
// 			i++;
// 		}
// 		if(arr[i]==1){
// 			swap(arr[i],arr[end]);
// 			end--;
// 		}

// 	}
// 	for (auto value: arr){
// 		cout<<value<<" ";
// 	}
// }