//cpp me array fir se wahi h jo normal a but there is only one different in both 1d and two-D array is ,2-D  is 
//the combination of multiple 1-D array .
//why do we need ----if we create 5 array and collect it then it comes into single 2-D array but what if the array
//size which we want is more than thousand of rows and column then how can we create it ,thats why we take 2-D array.
//how to diclear int arr[22][44];

//2-d ka acutal me visualisation hi 2d me hoga baki to wo bhi apna memo me as a 1d hi store hoga.
// int arr[2][1]; jo h visulisation me esa kuch dikhega 
// [a,b,c,]
// [d,e,f,]
// [g,h,i,] jisme 3 row h or ek 3 hi colm h but ye momory me 
//[a,b,c,d,e,f,g,h,i,] as a linear hi store hoga toh ab kese pta chalega ki 2,1 par kon h.
//uska formula hota h ek 
//FORMULA---> C*I+J (C is  total column,i is the ith index  of row and j is jth column )

//-------------------------------------------------------------------
// //lets come to the code 

// #include<iostream>
// using namespace std;
// int main(){
//     //declearation of 2d array
//     int arr[3][3];
//     //initialise this
//     int brr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}};
//     int rowsize =3;
//     int columnsize =3;
   // cout<<brr[2][5]<<endl; it gives error
    //cout<<brr[2][2]<<endl; //agr n index ki len  n toh n-1 indx tak jayenge 
    //how to print this --it may be row wish or it may be column wish.
    //lets see both

    //row wish print of 2d array
//     for(int i =0;i<rowsize;i++){
//         for (int j=0;j<columnsize;j++){
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
  

//   //column wish print of 2d 
//     cout<<"column wish"<<endl;
//     for(int i =0;i<rowsize;i++){
//         for (int j=0;j<columnsize;j++){
//             cout<<brr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
  
  //how to take input in 2d array

//     int drr[3][4];
//     int row=3;
//     int col=4;
//     cout<<"taking input for 2d array: with spaces"<<endl;
//     for(int i=0;i<row;i++ ){
       
//         for(int j=0;j<col;j++){
//             cin>>drr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"see array for 2d array:"<<endl;
//     for(int i=0;i<row;i++ ){
//         for(int j=0;j<col;j++){
//             cout<<drr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }


//column wish lete h input me

//     int drr[3][4];
//     int row=3;
//     int col=4;
//     cout<<"taking input for 2d array: with spaces"<<endl;
//     for(int i=0;i<row;i++ ){
       
//         for(int j=0;j<col;j++){
//             cin>>drr[j][i];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"see array for 2d array:"<<endl;
//     for(int i=0;i<row;i++ ){
//         for(int j=0;j<col;j++){
//             cout<<drr[i][j]<<" ";
//         }
//         cout<<endl;
//     }    


//     return 0;
// }


//--------------------------------------------------------Next-----------------------------------------------------------
//Question----> add sum of rows in 2d array {like sum of 1st row element and for 2nd row its addition}
// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}};
//     int row=3;
//     int col=3;
//     int result=0;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){    //yato result ko yahi par initialise kar do taki niche use zero na karna pade;
//             result=result+arr[i][j];
   
//         }
        
//         cout<<"the sum is :"<<result;
//         result=0;
//         cout<<endl;
 
//     }
//     return 0;
    
// } 
//agar yahi kam apn as a using of function karte to usme, always keep in mind that on passing function parameter as a array then it is mandatory to share ,arr[][3]; except first column filied  need to specify
//how many rows and columns we have 
//-----------------------------------------------------------

//same for sum of column wish sum of array:

// #include<iostream>
// // using namespace std;

// void sum_of_columns_element( int arr[][],int row, int col){
//     int result=0;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){    //yato result ko yahi par initialise kar do taki niche use zero na karna pade;
//             result=result+arr[j][i];
   
//         }
        
//         cout<<"the sum of column "<<i<<" is  :"<<result;
//         result=0;
//         cout<<endl;
 
//     }
// }
// // int main()
// {
//    int arr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}};
//     int row=3;
//     int col=3;
//     sum_of_columns_element(arr,row,col);
//     return 0;
    
// } 

//-----------------------------------------------------------------------------NEXT---------------------------------

//Question ----> finding a element if exist in matrix then return true else return false:


// #include<iostream>
// using namespace std;

//     bool search_element( int arr[][3],int row, int col,int element){
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){    //yato result ko yahi par initialise kar do taki niche use zero na karna pade;
//                 if(arr[j][i]==element){
//                     return true;
//                 }
                 
//             }
                
            
//         }
//         return false;
//     }    
// int main()
// {
//    int arr[3][3]={
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}};
//     int row=3;
//     int col=3;
//     int element;
//     cout<<"Enter the element which you want to search in array: ";
//     cin>>element; 
//     search_element(arr,row,col,element);
//     bool result = search_element(arr, row, col, element);

//         if (result) {
//             cout << "Element found in the array." << endl;
//         } else {
//             cout << "Element not found in the array." << endl;
//         }

//         return 0;
// }


//--------------------------------------------Next------------------------------------------------------
//Qusstion -----> find the max and min number from 2d array

// #include<iostream>
// #include <limits.h>
// using namespace std;
// int maxi=INT_MIN;
// int arr[3][3]={
//     {1,2,6},
//     {3,4,5},
//     {7,8,19}};
// int row=3;
// int col=3;   

// int main(){
//     for (int i =0;i<row;i++){
//         for (int j=0;j<col;j++){
//             if (arr[i][j]>maxi){
//                 maxi=arr[i][j];
//             }
//         }
//     }

//     cout<<"maximum element of this array is :"<<maxi;
// }


//MINIMUM ELEMENT OF THE ARRAY---------

// #include<iostream>
// #include <limits.h>
// using namespace std;
// int maxi=INT_MAX;
// int arr[3][3]={
//     {1,2,6},
//     {3,4,5},
//     {7,8,19}};
// int row=3;
// int col=3;   

// int main(){
//     for (int i =0;i<row;i++){
//         for (int j=0;j<col;j++){
//             if (arr[i][j]<maxi){
//                 maxi=arr[i][j];
//             }
//         }
//     }

//     cout<<"minimum element of this array is :"<<maxi;
// }


//------------------------------------Next----------------------------------------------------------------------------
//Qusetion ---->transopose a matric
// #include<iostream>
// // #include <limits.h>
// using namespace std;
// // int maxi=INT_MAX;
// int arr[3][3]={
//     {1,2,6},
//     {3,4,5},
//     {7,8,19}};
// int row=3;
// int col=3;   
// int main(){
  
//         for(int i=0; i<row; i++){
//             for(int j=i;j<col;j++){
//                 swap(arr[i][j],arr[j][i]);
              
//             }//there is only small change i do in transpose a matrix which is just as like i swap all the index ,
//             //this get an issue of dual changes as same as before on coming on same index ,
//             //i resolve this on moving into loop from the i means those row then i go from there in column.
//         }
//             cout<<"array after the   transpose is :"<<endl;
//         for (int i =0;i<row;i++){
//             for (int j=0;j<col;j++){
//                 cout<<arr[i][j]<<" ";  
//             }
//             cout<<endl;
//         }
        

// } 

//----------------------------------vector of vector----------------------------------------------------
//as same as  vector of int which contain integer of vector ,vector of bool contain boolean of vector and same as char,string etc type vector
//there is another vector which is vector of vector which contain vectors itself inside this owm.
//how its declaration -----
//  vector<vector<int> > array;     // always remember that sometime in between > > space is give error ,it is complsry to give space
//now ,lets intialise it by any integer value::



#include<iostream>
using namespace std;
#include<vector>

int main(){
   // vector<vector<int> > arr;
//     vector<int>a{1,2,3};
//     vector<int>b{4,5,6};
//     vector<int>c{7,8,9};
//     arr.push_back(a);   //phle big vector liya uske under ek or vector k under  me elements dale then push in vector then vector of vector.
//     arr.push_back(b);
//     arr.push_back(c);
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[0].size();j++){  //arr[0 ] hi nahi koisa bhi row lelo jiske same column h 
//         //but if no. column is differ then we find out by arr[i].
//             cout<<arr[i][j]<<" ";

//         }
//         cout<<endl;
//     }
// }


//how to initalise 2-d vector lets see :

//vector<vector<int> >arr(row, vector<int> (col, intialising value))// this is my 2d vector of vector :
//lets create of 5X5 matrix for 2d array using vector:


//     vector<vector<int> > array(5, vector<int>(5,-5));
//     for(int i=0;i<array.size();i++){
//         for(int j=0; j< array[0].size();j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }   
