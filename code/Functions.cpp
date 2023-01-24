#include <iostream>
using namespace std;

//Global variable: 
// 1- can be used in any function
// 2- are kept inside code memory location
// 3- will be avalible in memory until code stops being used
int g = 0;
int v = 0;

/* 
// avoid using cout inside functions, 
// in order to have function interaction, use return

int add(int x, int y){
    int z;
    z = x + y;
    return z;
}
*/

/* 
float add(int x, int y) // header of a function
{
    float z;
    z = x+ y;
    return z;
}

int Max(int a,int b,int c)
{
    int max;
    if(a > b && a > c){
        max = a;
    }else if( b > a && b > c){
        max = b;
    }else{
        max = c;
    }
    return max;
} 
*/

/* 
//power of a number
int pow(int x, int y){
    int retval = 1;
    for(int i = 1; i <= y; i++){
        retval = x * retval;
    }
    return retval;

}
 */

/* 
// overloading function, using the same name for two funtions, but they are diferent due to the number of arguments
// data types and return types that are not the same.
int add(int x, int y){
    return x + y;
}

int add(int x, int y, int z){
    return x + y + z;
}

float add(float x, float y){
    return x + y;
}
*/

/* 
// Template function, that works in a generic way, indepently on numeric data type
template <class T>
T Max(T x, T y){
    if (x > y)
        return x;
    else
        return y;
}
*/

/* 
// setting z as 0, makes it a default setting, doesn't require the declaration of number again
int add(int x, int y, int z = 0){
    return x + y + z;
}
*/

/* 
// pass by value, int this case, the actual values of a and b are not chaning, but their values inside the function are being changed
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
}
 */

/* 
// in this case the change of values is real, due to the fact that "a" and "b" are pointers, so their memory location is being passsed
void swap(int *a, int *b){
    int temp;
    temp = *a; // variable temp gets "a" memory location
    *a = *b;   // "a" gets new value, the address of b 
    *b = temp; // "b" gets the value of temp, which is the memory location of "a"
}
 */

/* 
// in this case the change of values is real, due to the fact that "a" and "b" are references, so ther memory reference is being passsed
void swap(int &a, int &b){
    int temp;
     cout<<&a<<" "<<&b<<endl;
    temp = a; // variable temp gets "a" memory reference
    a = b;   // "a" gets new value, the address of b 
    b = temp; // "b" gets the value of temp, which is the memory reference of "a"
}
 */

/* 
// returning by address
int* fun(int size){ // function that returns an pointer of type interger
    int *p = new int[size]; // list of pointers with the size passed by the user

    for(int i = 0; i < size; i++){ // that increments each element of the list by 1, (0,1,2,3,4...)
        p[i] = i + 1;
    }
    return p; // returning the list
    // returning address of memory
    // being able to return address of memory allocated in heap
}
 */
/* 
//returning by reference
int & fun(int &a){
    cout<<a<<endl;
    return a; // it can return formal parameters if they are reference (which is the case)
}
 */

/* 
// funtion to alter "g" global variable
void fun(){
    // Local variable
    // 1- can only be used inside function scope
    // 2- will be in memory heap
    // 3- once the fucntion is not being used, it will be erased from memory
    int a = 5; // local variable
    g = g + a; // updating g's value
    cout<<g<<endl; // showing it
}
 */

/* 
// static variables after being declared inside a function
void fun(){
    static int a = 5; // not requiring re declaration of values
    a++; // increment of value 
    cout<<a<<" "<<v<<endl; // value incrementing but not re-declaring
}
*/

/* 
// recursive function
void fun(int n){ // the value of n determine how many times it will be called
    if(n>0){     // if n is greater than 0, it will count value as long as it is greater than 0
        cout<<n<<endl; 
        fun(n-1); // calling function less 1
    }
}
 */

/* 
// Gets three parameters, integer list: A[], integer that has "n" values, val -> value that is being searched 
int LinearFunc(int A[], int n, int val){
    for(int i = 0; i <n;n++){
        if(val == A[i])
            return i;
    }
}
 */

int main(){
/* 
    int val1 = 10, val2 = 5, val3;
     val3 = add(val1,val2);
    cout<<"sum is "<<val3; 
*/

/* 
    float x= 2.3, y= 7.9,z;
    z =add(x,y);
    cout<<z<<endl;    
*/

/*     
    cout<<pow(2,5);
*/

/* 
    cout<<Max(6,5)<<endl;
    cout<<Max(12.5f,24.7f)<<endl;
*/
/* 
    cout<<add(5,6)<<endl;
    cout<<add(7,8,9)<<endl;
  */
/*
// swap by value
 int x =10, y=20;
 cout<<x<<" "<<y<<endl;
 swap(x,y);
 */ 

/* 
// swap by address
 int x =10, y=20;
 cout<<x<<" "<<y<<endl;
 swap(&x,&y); // passing the reference to the address of theses variables in memory
 cout<<x<<" "<<y<<endl;
 */

/* 
// swap by reference
 int x =10, y=20;
 cout<<x<<" "<<y<<endl;
 swap(x,y); // passing the reference to the address of theses variables in memory
 cout<<x<<" "<<y<<endl;
 */

/* 
// returning by address
int *ptr = fun(10);
for(int i =0; i < 10; i++)
    cout<<i<<endl;
 */

/* 
int x =10;
fun(x)=25;
cout<<x;
 */

/* 
g = 15; // reassining value to 15 
fun(); // callling function fun
g++; // incrementing value after function
cout<<g - 2; // printing it less 2
 */

/* 
g = 30;
{
    int g = 40;
    cout<<g<<endl; // block scope chaning global variable value inside brackets
}
    cout<<g<<endl;// value of g inside main class
    cout<<::g<<endl; // block scope outsied value (not working)
 */

/* 
// re-calling function and incrementing it
fun();
fun();
fun();
 */

/* 
int n = 5;
fun(n);
 */


// Linear Function
/* 
int A[] = {2,3,4,55,6,9,8,10};
int k;

cin>>k;

int index = LinearFunc(A,8,k);

cout<<"Showing values "<<index<<endl;
 */

return 0;
}