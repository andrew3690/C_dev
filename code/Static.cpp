#include <iostream>
using namespace std;

class Test{
    public:
        int a;
        static int count; // static integer
    
    Test(){
        a =10;
        count++;
    };
};

int Test::count= 0;

int main(){
    Test t1,t2; // creating two objects of Test
    cout<<t1.count<<endl; // due to the creation of two objects the function was called twice, making it sum 0 + 1 = 1 and 1 + 1 = 2;
    cout<<t2.count<<endl;
    t1.count=25;
    cout<<t2.count<<endl; // in this case, there is a single count varaible for both direct object instatianting and class instatianting 
    cout<<Test::count<<endl;
}