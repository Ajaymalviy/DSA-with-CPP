//time complexity vise best hai .
//it is a data structure hota , jiski time complexity bahut kam hoti hai
//ordered map ki complexity 0log(n) hoti hai
//unordered ki 0(1) hoti hai

//Implementation:
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
	//creationg of map 
	// unordered_map<key, value>map_name;
	unordered_map<string, int>m;
	//1st way of insertion of data:
	pair<string, int>p = make_pair("babbar",3);
	m.insert(p);
 

    //2nd way of insertion of data:
	pair<string,int>pair2("hai", 3);
	m.insert(pair2);

	//3rd way of insertion of data
	m["ajay"]=1;  //in first time it creates a new entry in map
	//cpp me '' single quote is differ with "" double quote remember this .
    // cout<<m.at("mera")<<endl; this gives error because it is not created at first 
 

	m["ajay"]=2;   //in second time it change the value of key ajay


	//4th way
	  // Declaring umap to be of  
	  // <string, double> type key  
	  // will be of string type and  
	  // mapped value will be of double type 
	  unordered_map<string, double> umap = {  //inserting element directly in map 
	  {"One", 1}, 
	  {"Two", 2}, 
	  {"Three", 3} 
	}; 


   //5th way 
	// inserting value by insert function 
	umap.insert(make_pair("e", 2.718)); 

    m.insert({{"nanu",12}, {"mamu", 23}});
	cout<<m["mera"]<<endl;//ye return karega zero quki mera ki koi key nahi hai but create ho jayegi auto  that's why it returns 0, but same thing with different function is differ.
	cout<<m.at("mera")<<endl; // iske through zero hua h agar ye line uper hoti to error ata ya 
	cout<<m.at("ajay")<<endl;


	// koi eshi key jo exist nhi karti usko run karte 
	// cout<<m.at("lol")<<endl; ye run nahi hoga iski jgh age pehle niche wali line ko run kare  to wo zero print kar degi
	// cout<<m["lol"]<<endl;

    //finding of size 
    cout<<"first time on using size fucntion "<<m.size()<<endl;

    // to check presence of element in map is as 
    cout<<m.count("aj")<<endl;
    cout<<m.count("ajay")<<endl; //count return 0 if not found 1 if meet.

    //to erase any key value
    m.erase("hai");
    cout<<"now after erase function size is "<<m.size()<<endl;


   //how to print all key value of  a map
    cout<<"print all key value of a map"<<endl;
    for(auto i:m){  //&i laga dene se copy nhi hogi key ki that's why maximum time we are use & with traversing.
    	cout<<i.first<< " "<< i.second<<endl;
    	{
    		
    	};
        
    }

    //using iterator printing
    cout<<"After for each loop now use iterator"<<endl;
    unordered_map<string,int> :: iterator it =m.begin();
    while(it != m.end()){
    	cout<<it->first<<" "<<it->second<<endl;
    	cout<<(*it).first <<" " <<(*it).second<<endl;
    	it++;
    }
    //output me agar unorder aa araha hai to apn order sirf map likh de jisse ki wo order me aa jayega.

//-----------------------------------------------------------HASHING CONCEPT-------------------------------------------------


    //Jab ham kisi string,char,etc variable data type ko int me convert karte hai to usme ek intermediate lagata hai jise hash code kehte hai.
    // dusra hota hai compression jo ki compress karta hai ,assume a array [ 0 , 1 , 2 , 3  , 4 ,5]
    //like == "ajay"--> hashcode --> 23
    // == "ajya"-->23    ,both wants to sit at single place in array
    // isi ko collision kehte hai ,now question is how to handel this ??
    // open hashing and closed addressing 
    //OH-- same place par hi daal do , isi ko separate chaining bhi bolte hai.

    //like array ke 2nd index par dono ajay and ajya daal do . 
    // [0, 1 , head , 3, 4 ] : here head is linked list head where point to hear->ajay->ajya according to the request.
    // isi ko separate chainig bhi kahte hai.

    //CH-- same place par ek ko daal do then bacha hue ko next place par dal do easy hai.
    //time complexity jo hai wo apni O(1) constant hoti h

	return 0;
}