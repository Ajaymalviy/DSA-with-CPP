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




// #include<iostream>
// #include <string.h>
// using namespace std;
// int main(){
// 	string A="hello ji kya haal chal";
// 	string B="haal";
// 	cout<<"wale index par mila ye : "<<A.find(B)<<endl;
//     A.replace(0, 4 , B);
//     cout<<"string mila hai : "<<A <<endl;
//     A.erase(5,10);
//     cout<<A;

// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
// 	string s;
// 	string part;
// 	cout<<"enter a string : "<<endl;
// 	cin>>s;
// 	cout<<"enter a part of string : "<<endl;
// 	cin>>part;
// 	int from = s.find(part);
// 	cout<<from;
// 	while(from != string::npos){
// 		s.erase(from, part.length());
// 		s.find(part);
// 	}
// 	cout<<s <<endl;
// 	return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s;
//     string part;
//     cout << "enter a string : " << endl;
//     cin >> s;
//     cout << "enter a part of string : " << endl;
//     cin >> part;
//     int from = s.find(part);
//     while (from != string::npos) {   //npos matalb jabtak ki string milti jaye  chalne do , ek varible hai jo btata hai ki jo find kar rahe h wo ni h noposition.//apka element ni mili
//         s.erase(from, part.length());
//         from = s.find(part);
//     }
//     cout <<"after removing part string from main string s :"<< s<<endl;
//     return 0;
// }


//problem 680 valid palindrom ||

// #include<iostream>
// #include<string>
// using namespace std;

// 	bool checkpalindrom(string s, int i, int j){
// 		while(i<=j){
// 			if(s[i]==s[j]){
// 				i++;
// 				j--;
// 			}
// 			else{
// 				return false;
// 			}
// 		}
// 	    return true;
// 	}

// int main(){

//     string s;
// 	int i=0;
// 	int j=s.length();
// 	cout<<"Enter a string with a extra non palindromic char"<<endl;
// 	cin>>s;
// 	while(i<=j){
// 		if(s[i]!=s[j]){
// 			return checkpalindrom(s,i,j-1) || checkpalindrom(s,i+1,j) ;
// 		}
// 		else{
// 			i++;
// 			j--;
// 		}
//     }
// }

#include <iostream>
#include <string>
using namespace std;

bool checkpalindrome(string s, int i, int j) {
    while (i <= j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string with an extra non-palindromic char: ";
    cin >> s;
    int i = 0;
    int j = s.length() - 1; // Adjusted j to be the last index of the string

    while (i < j) { // Changed the condition to i < j
        if (s[i] != s[j]) {
            // Check if palindrome after removing char from either end
            bool result = checkpalindrome(s, i, j - 1) || checkpalindrome(s, i + 1, j);
            if (result) {
                cout << "String is palindrome after removing one character." << endl;
                return 0;
            } else {
                cout << "String is not palindrome after removing one character." << endl;
                return 0;
            }
        } else {
            i++;
            j--;
        }
    }
    cout << "String is already palindrome." << endl;
    return 0;
}
