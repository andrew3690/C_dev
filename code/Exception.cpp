#include <iostream> 
using namespace std;
/* 
    Creating a self made class, that inheriths from C++ defaultexception class
*/
class MyException: public exception{
    public:
        char * what(){
            return "My Exception";
        }
};
/*
    In case of exception happening it can be set the usage of the self made class, and
    throw the method, as done bellow
*/
int divi(int a, int b) throw(MyException){
    MyException *m;
    //return m->what();
};
    
int main(){
 int a =10, b =0, c;


try{
    if(b == 0)
        throw(1);
        c = divi(a,b);// calling a function to make the division
        cout<<c;
 }
 catch(int e){ // exception handling through the usage of throw, if a division by 0 happens,
              // it runs the code bellow.
              
    cout<<"Division by zero";
 }
 cout<<"Testing end of program";
}