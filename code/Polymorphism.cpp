#include <iostream> 
using namespace std;

class Base{ // Abstract class, it can't be instancianted, but it can have pointers that points
    public:
    // pure virtual methods, this ones are made to be overriden
        virtual void display() = 0;
        virtual void version() =0;
};

class Derived: public Base{
    public:// here we are overiding the Base class method
        void display(){
            cout<<"Display of Derived "<<endl;
        }

        void version(){
            cout<<"Version:1.0.0 "<<endl;
        }
};

class Asvwell: public Base{
    public:// here we are overiding the Base class method
        void display(){
            cout<<"Display of Aswell "<<endl;
        }

        void version(){
            cout<<"Version:1.0.1 "<<endl;
        }
};

int main(){
    // using polymorphism
    Base *prt = new Derived();
    prt->display();
    prt->version();

    prt = new Asvwell();
    prt->display();
    prt->version();

    return 0;
}