#include<iostream>
using namespace std;

class Test{
    int *p;// creating a pointer in private scope
    public:

    Test(){
        p = new int[10]; // assining a vector of 10 spaces for this pointer
        cout<<"building Test instance"<<endl;
    }

    ~Test(){
        delete []p; // it must be deleted on stack memory dealocation, otherwise it will cause memory leak 
        cout<<"Destructor of Test"<<endl;
    }

};

void Show(){
    Test *t = new Test();
    delete t;

}


int main(){
    Show();
}