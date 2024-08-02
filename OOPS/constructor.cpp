//A constructor is a special member function that is called automatically when an object is created.
//a constructor has the same name as that of the class, and it does not have a return type.


<<<<<<< HEAD
=======

>>>>>>> refs/remotes/origin/main
//lets create a constructor..
#include <iostream>
using namespace std;

class Village{ 
//this is the class name village and set data member as a private which is default set private .
private:
	string name;
	string location;
	int population;

public:

	//this is default constructor if we are not create this manually then it create boxes of name location and population of data member in memory but not initialise values .
	Village(){
		cout<<"this is a default constructor which is called automatically when object is initialize of villlage class"<<endl;
	}

	//now create another constructor which is parameterize 
	//this is used for recorganising that name location and population is the above data member at left side .
	Village(string name, string location, int population){
		this->name = name;
		this->location = location;
		this->population = population;
	}
  
    Village(string naam, string jagah){   //it takes 0 at population defaultly cozz we are not initalise here this is 
    	name = naam;
    	location = jagah;
    }


//this is used for printing data members of class village if we call display with v1 then it default takes garbage values of name loc and population.
	void display(){
		cout<<"name of the village is : "<<name<<endl;
		cout<<"location of the village : "<<location<<endl;
		cout<<"population of the village is : "<<population<<endl;
	}
};
int main(){
	Village v1,v2("haluhedi", "near pachore", 1800),v3("haluhedi khurd" , "near saredii");

	v2.display();
	cout<<"now i call v3 constructor"<<endl;
	v3.display();
}
