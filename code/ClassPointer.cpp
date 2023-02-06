#include <iostream>
using namespace std;
class Base{
    public:
        void funct1(){
            cout<<"fun1 of Base"<<endl;
        }
};

class Derived: public Base{
    public:
        void funct2(){
            cout<<"fun2 of Derived"<<endl;
        }
};

int main()
{
    Derived d;
    Base *prt = &d;
    prt->funct1();
    /*  prt->funct2(); //can't call  functions from derived classes, only base class funtions can be called*/
    /* It's like the concept of a car, that takes a base car as their concept, but it diferentiates it self from
    it's roots making a cheaper version, or even a sport version of it, the sport version would probalby not take 
    the ideia of a bigger gas tank, or bigger tires, it would tdo the reverse, and so on.*/
    return 0;
}
