#include<iostream>
using namespace std;
//functions can be predefined here
#define sqr(x) (x*x)
#define max(x,y) (x>y?x:y)

// if not defined pi, define as...
#ifndef pi 3.14985 
#endif

// Scope operator: namespaces eliminate any confunsion for the compiler:
// used to group classes, functions and objects, grouping the program into logical units
namespace First{
    void fun(){
        cout<<"First"<<endl;
    };
};

namespace Second{
    void fun(){
        cout<<"Second"<<endl;
    };
};

/*
int cont(int const &a, int &b){
    cout<<a<<endl;
    a++;
}
*/

// here it's set, whitch of the methods will be used by default, without needing to call it
using namespace First;

int main(){
    int x=10; // const int x=10; setting a constant varaible, that can't be changed and use it in diferent context, without altering it
    int *ptr = &x; // a reference can't alter it's value, due to it causes ther altering of constant variable
                   // if declared as constant, increment cant be done

    ++*ptr;

    cout<<*ptr<<" "<<x<<endl;
    cout<<sqr(5);
    
    fun();
    Second::fun();
    First::fun();
}