#include <iostream>
using namespace std;

int main() {
    //Note: independly of the data type of the variable, the size of a pointer still the same,
    // which is 8 bytes.

    /* // simple integer Variable
    int a=10;
    // pointer integer variable creation, referecing a adress
    int *p=&a;
    // showing the variable value
    cout<<a<<endl;
    // referecing it shows it's location on the heap of program
    cout<<&a<<endl;
    
    // the value of p is the address of a
    cout<<p<<endl;
    // dereferecing it's address will show a's address on the heap 
    cout<<&p<<endl;
    // referencing the pointer value will show a´s value since, the pointer was addressd to it
    cout<<*p<<endl; */

    // Note: here we have a list of elements
    // p is a pointer that makes a reference to the element 3 of the list, that is 8
    // printing it will show the 8 value, then p[-2], decrements -2 values in the list and gets
    // the value 4; 
    /* int A [] = {2,4,6,8,10,12};
    int *p = &A[3];
    cout<<*p;
    cout<<p[-2]; */

    /* //Pointers arithimetic
    int A[5] = {1,2,3,4,5};
    int*p = A;
    int *v = &A[3];
    
    // adding +1 lets the pointer acess the next value in the list
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;

    // subtracting a number makes it acess the previous value of a list 
    p--;
    cout<<*p<<endl;

    // adding a number to the actual address lets acesses the third
    // element of a list (in this case), the adding helps the acess 
    // of elements deppeding on the position of the value in the list  
    p = p + 2;
    cout<<*p<<endl;

    // Note: each number has 4 bytes, so it's important to see that every time that a +1 is done
    // there is a 
    p = p - 2;
    cout<<*p<<endl;
    // Note: here is the assumption of distance bettween pointers if it's positive
    // v is probably in the rightest side of the array
    // else p is probably in the left side of the array
    int d = v - p;
    cout<<d<<endl; */

    // Note: pointer increment will move the pointer on the data type of pointer
    // in case of int is 4 bytes, so pointer will move by 4 bytes
    // if pointer is char type the will move only 1 byte

    //Loop operations with pointers
    // declaring a list of elements
/*     int A[5]{2,4,6,8,10};
    
    // pointer *p gets the entire array
    // pointer *q gets the address of element of position 4 on it
    int *p=A, *q =&A[4];
    cout<<p<<endl;

    // this loop shows all elements from p
    for(int i=0;i <5;i++){
        cout<<*p<<endl;
        p++;
    }
    // The final value is the address of p + 20 in hex
    cout<<p<<endl;
    //Pointer Arihtimetic
    cout<<p -q;
 */

    //Problems with Pointers

    //1- Unitialized Ptr
    //Valid declarations of pointers
    /* int x = 10;
    int *p;
    //1
    p = &x;

    cout<<*p<<endl;
    //2
    p=(int *)0x5638;
    cout<<p<<endl;
    //3
    p = new int(5);
    cout<<*p;

    //2 - Memory Leak
    //Correct deletion of pointers and heap dealocation
    int *p = new int[5];
    cout<<p<<endl;
    delete []p;
    p = nullptr;
    cout<<p<<endl; */

    // Reference
    /* int x = 10;
    int &y = x; // work as alias of x variable "x"
                // doesn't occupy any space in memory
                // it can only reference only one variable(in this case x)
    x++;
    y++;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&x<<" "<<&y; // it gets the address of the numbers
    int a =x; // data of "x"
    x = 25;   // address of "x"
    cout<<x<<endl; */

    //Note: Case of variable usage, as y is a variable that is making a reference to x
    // they are the same varaible, so when x + y happens, actually is 10 + 10, altering
    // the value of x
    /* int x =10;
    int &y = x;
    y = x + y;
    cout<<x; */

    // Note: here is the case of reference to a pointer of type integer
    // x is a variable, y is a pointer variable, pointing to x. z is a reference to a pointer variable
    // int * &z = y, this means that z in another name of y, now y and z are 2 names of the same pointer
    /* int x = 10;
    int *y = &x;
    int * &z =y;
    
    cout<<&z<<endl; */
}