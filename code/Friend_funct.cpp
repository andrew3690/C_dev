#include <iostream>
using namespace std;

// example using Friend class
class Your;

class Base{
    private:
        int a = 15;
    protected:
        int b = 29;
    public:
        int c = 34;
    friend Your;
};

// Using friend calling enables acess to private and protected variables
// by other classes, and objects of this classes
class Your{
    public:
    Base b;
    void show_private(){
        cout<<"A = "<<b.a<<endl;
    }

    void show_protected(){
        cout<<"B = "<<b.b<<endl;
    }

    void show_public(){
        cout<<"C = "<<b.c<<endl;
    }
};

int main(){
    Your *y;
    y->show_private();
    y->show_protected();
    y->show_public();

    return 0;
}