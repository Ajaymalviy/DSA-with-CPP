#include<iostream>
#include<functional>
using namespace std;


int main(){
    plus<int> aj;
    int sum = aj(3,4);
    cout<<"ye dikh rhaa "<<sum<<endl;
   
    minus<int>minus;
    int res=minus(2,2);
    cout<<"result of minus is "<<res<<endl;

    divides<int>devide;
    int ress=devide(5,4);
    cout<<"divide result is "<<ress<<endl;
    
    multiplies<float>mult;
    float resutl=mult(1.8,2);
    cout<<"result of mutliple is "<<resutl<<endl;


    return 0 ;


}
