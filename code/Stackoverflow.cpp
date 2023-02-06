#include <iostream> 
using namespace std;
/* 
    Creating a self made classes, that inheriths from C++ defaultexception class
*/
class Stackoverflow:exception{};
class Stackunderflow:exception{};

class Stack{
    private:
        int *stk;
        int top =-1; // initally stack start with top -1, because it is empty
        int size;
    
    public:
        Stack(int x){
            size =x;
            stk = new int[size];
        }
        
        void push(int x){
            if(top==size-1){
                throw Stackoverflow(); // throwing exceptions
                top++;
                stk[top]=x;
            }
        }
        
        int pop(){
            if(top ==-1){
                throw Stackunderflow(); // throwing exceptions 
                return stk[top--];
            }
        }
};
    
int main(){
    Stack s(5);
    
    s.push(1);
    s.push(5);
    s.push(4);
    s.push(10);
    s.push(28);
    s.push(45);// exception Stackoverflow happens here
}