//string in nothing same as character , where collcetion of characrter hi hai ,
// string is a datatype ,dynamic character array (push back ,etc ) , ider ye mutable hota hai java me immutable hota h
// hamesh ham string use karenge na ki character array 
//ye bhi same  as vector hota h jaha collcetion of character store karega.


//----------------------------
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
// 	//creation 
// 	string str;
// 	cout<<"enter a string :";
// 	cin>>str;
// 	cout<<str;
// 	return 0;

// }



//cin me agar ajay '' malviya aaya to wo bich ki space ni lega 
//jabki agr ham getline karenge to wo sab lega tab , space or bhi.. 


// #include<iostream>
// #include <string.h>
// using namespace std;

// int main(){
// 	string str;
// 	cin>>str;
// 	cout<<str<<endl;
// 	cout<<"length by function : "<<str.length()<<endl;
// 	cout<<"string is emplty or nor : "<<str.empty()<<endl;
// 	str.push_back('q');
// 	cout<<"string is done by push back : "<<str<<endl;
// 	cout<<"substring : "<<str.substr(0,6)<<endl;
// 	str.pop_back();
// 	cout<<"pop back is also work :  "<<str;
	// str.find('love');
	// cout<<"find first index dikhayega jo age find ho gya sub string : "<<str;
// 	return 0;
// }
// //compare wala bahut complicated hai yyad rakhna teen ans aayeaga
//0,-1,1
//first string ka first char second k first se bada hai to positive aayega






#include<iostream>
#include <string.h>
using namespace std;

int main(){
	string A="hello ji kya haal chal";
	string B="haal";
	cout<<"wale index par mila ye : "<<A.find(B)<<endl;
    A.replace(0, 4 , B);
    cout<<"string mila hai : "<<A <<endl;
    A.erase(5,10);
    cout<<A;

}