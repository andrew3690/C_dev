#include <iostream> 
using namespace std;

class Base{
    public:
        //usage of virtual
        virtual void display(){
            cout<<"Display of Base "<<endl;
        }
};

class Derived: public Base{
    public:// here we are overiding the Base class method
        void display(){
            cout<<"Display of Derived "<<endl;
        }
};

int main(){
    // Dealing with runtime polymorphism:
    
    //Derived *prt; // creating a pointer that references class methods and atributes
    //prt->display(); // it displays Derived class method display() 

    // Now creating a class based pointer *p and instantiating the class Derived, the result when calling the funtion is:
    Base *p = new Derived();    // without virtual classes the method at class Base is called,
    p->display();               // due to it's calling being based on pointer calling, witch ends up calling it's Base class method,
                                // but when using virtual classes, it's calling problem it's solved due to it'so overriding the Base class
                                // making it a runtime polymorphism case. 
    return 0;
}