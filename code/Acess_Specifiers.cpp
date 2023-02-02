#include <iostream>
using namespace std;

class Base
{
    private:
        int a;
    
    protected:
        int b;
    
    public:
        int c;
    
    void funcbase(){
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived: Base
{
    public:
        void funDerived(){
             // a = 1; // private variable non acessible in this context
             b = 2;
             c = 3;
        }
};

int main(){
    Derived d;
    // Hierarchy of acessible variables types
    /* 
    Inside class  : V-Private, V-protected, V-public
    Derived class : X-Private, V-protected, V-public
    Objtect acess : X-Private, X-protected, V-public 
    */
    return 0;
}