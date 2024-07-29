//OOPS-->define object oriented programing language.
//class is the blueprint of object while objects are the real entity in the world.

//creation of class in cpp , class contain property and methods.like 
// class classname{
	//properties

	//methods

//}; always end with }; ,means that class is end here.


#include <iostream>
#include <string>
using namespace std;

class Teacher{
	//properties/attributes
private:
	float salary;

public:
	string name;
	string department;
	string subject;
	

	//methods or member functions
	void changedepartment(string newdepartment){
		department = newdepartment;
	}
    
    //called setter in cpp bcoz it takes private and print it
	void setsalary(float s){
		salary = s;
		cout<<"this is from setsalary function salary"<<salary<<endl;
		cout<<"this is from setsalary function s"<<s<<endl;
	}


    //it called a getter which print salart by jugad
	// void getsalary(){
	// 	cout<<"this is from getsalary function i was print salary "<<salary<<endl;
	// } 

	float getsalary(){
		return salary;
	}

};


int main(){
    Teacher t1;
    t1.name = "ajay";
    t1.subject = "Maths";
    t1.setsalary(750000);
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    t1.getsalary();
    // cout<<t1.salary<<endl; it gives error cozz this is the private member.
    //  it gives error at first because it is private at first by default.now it comes in picture of access modifier.
    //which is private ,public, protected.
	return 0;
}