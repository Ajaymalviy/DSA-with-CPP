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


#include<iostream>
using namespace std;

    bool search_element( int arr[][3],int row, int col,int element){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){    //yato result ko yahi par initialise kar do taki niche use zero na karna pade;
                if(arr[j][i]==element){
                    return true;
                }
                 
            }
                
            
        }
        return false;
    }    
int main()
{
   int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
    int row=3;
    int col=3;
    int element;
    cout<<"Enter the element which you want to search in array: ";
    cin>>element; 
    search_element(arr,row,col,element);
    bool result = search_element(arr, row, col, element);

        if (result) {
            cout << "Element found in the array." << endl;
        } else {
            cout << "Element not found in the array." << endl;
        }

        return 0;
}
