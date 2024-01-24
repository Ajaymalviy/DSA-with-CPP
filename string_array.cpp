//string is also a collection of characters but a bit of difference is that char array is the collection of only character 
//but sting is the datatype which stores the data as a form of character.like a vector
//declearation is string str;
//initialising of string :
// #include<iostream>
// using namespace std;
// #include<string>

// int main(){
//     string str;
//     cout<<"enter a string : ";
//     cout<<endl;
//     cin>>str;
//     // getlenth(cin , 50)
//     //cin.getline(arr,59)
//     cout<<"you enter a string which is : "<<str<<endl;
//     cout<<"length of your string is :"<<str.length()<<endl;
//     cout<<"is empty funtion on this empty tells us "<<str.empty()<<endl;
//     str.push_back('o');
//     cout<<"love"<<str<<endl;
//     str.substr(0,5);//always remember this one it is very important.
//     cout<<"substring is :"<<str.substr(0,5)<<endl;

// }

//assume that thier is name 'love' which contain 4 space into memory ,and after this default getting a null character 
//as  same as char arr[], but in char arr we can access this null pointer '\0' but in sting it is not acessacible.

//---------------------------------lets talk about the comparision of two string -----------------------------
// on comparing two string it returns 3 values which 0,>0,,<0 .

// #include<iostream>
// using namespace std;
// #include<string>


// //manually compare function is works like that:
// bool compare_function(string str1,string str2){
//     if(str1.length() != str2.length()){
//         return false;
//     } 
//     else{
//         int j=0;
//         for(int i=0;i<str1.length();i++){
//             if(str1[i]!=str2[j]){
//                return false;
//             }
//             j++;
//         }
//         return true;    
//     }
// }

// int main(){
    // string str1="hello";//har character check karega    1 uper ka 1 niche ka.
    // //if first string is smaller than it return negative one else it return positive for smaller of having second string.
    // string str2="IllLOGG";
    // if (str1.compare(str2)==0){
    //     cout<<"both are exectly equall."<<endl;

    // }//case sensitive it is ,mean check different in b/w lower and upper case.
    // else{
    //     cout<<" both are not equal."<<endl;
    // // }
    // compare_function(str1,str2);
    // cout<<"string is checked"<< compare_function(str1, str2);
    //----------------FIND FUNCTION------------------------------

    // string x="hello ji kese ho sabhi";
    // string y="kese";
    // cout<<x.find(y);//first index of find substring else it return garbage value.

// //-------------------REPLACE FUCNTION----------------------------------------------
   
//     string one="this is my first message ";
//     string two="ajay";
//     one.replace(0, 4, two);//index show that from where, how many remove ,what actually replace .
//     cout<<one;
// }
