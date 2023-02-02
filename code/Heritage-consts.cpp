#include <iostream>
using namespace std;

// Base class, that contains two types of constructors
// first is done trought non-parametrized calling
// second is done by a parametrized constructor callling
// it works just as ordering a table, in case you dont specify any parameters, such as size,hegith the builder will
// build a default sized table
// but in case of creating a parametrized order, it will, be done as the parametrized order was requested. 
class Base{
    public:
        Base(){ 
            cout<<"Non param Base "<<endl;
        }
        
        Base(int x){
            cout<<"Param of Base "<<x<<endl;
        }
};

// Heritage class, that inherits methods from Base class
// Same thing as before, making a parametrized function calling and non-parametrized
class Derived: public Base{ 
    public:
        Derived(){cout<<"Non-Param Base"<<endl;}
        Derived(int y){cout<<"Param of Derived "<<y<<endl;}
};

int main(){
    Derived d(10);
    Derived();
}