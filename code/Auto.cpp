#include<fstream>
#include<iostream>
#include<memory>
#include<cstdarg>
using namespace std;

// declaring function with a pre-setted size of elements 
int sum(int x, ...){
    // declaring a list of elements to be allocated on heap
    va_list list;
    // initializing list with x vector assinged to the list prevoiusly declared
    va_start(list, x);

    int y;
    int s =0;
    // loop that cpatures element by element within the list and summing all elements
    for(int i=0; i < x;i++){
        y = va_arg(list,int);
        s +=y;
    }

    return s;
};
//  Declaring class with default constructor
class Test{
    int x=10, y =30;
    public:
        Test(int a, int b){
            x=a;
            y=b;
        }
        Test():Test(2,1){}

        void getxTest(){
            cout<<x;
        }
};

// creating a class Rectangle
class Rectangle{
    public:
    int breath;
    int length;

    Rectangle(int len, int bre){
        length = len;
        breath = bre;
    }

    int area(){
        return breath * length;
    }

};
// nested function for next lines usage
float  fun(){
    return 2.34f;
}


template<typename T>
void fun(T p){
    p();
}

int main(){
    auto x=2 * fun() + 'a'; //automatilcally detecting data type
    cout<<x;

    // lambda expressions
    [](int x, int y){cout<<"Sum"<<x+y<<endl;}(10,20);

    int a=10;
    auto f=[&a](){cout<<a++<<endl;};

    //usage of nested functions, as lambda functions enables to nest a outside funtion with a lambda expresion, passing it as argument
    fun(f);
    fun(f);

    //creating a shared pointer, that receives class 
    // and creating a new Instance of Rectangle(10,5)
    shared_ptr<Rectangle> prt(new Rectangle(10,5));
    //showing data metohd
    cout<<prt->area()<<endl;

    // creating a new shared pointer, that instantiates Rectangle
    shared_ptr<Rectangle> prt2;
    prt2 = prt;

    cout<<"ptr2 -> "<<prt2->area()<<endl;
    cout<<"ptr  -> "<<prt->area()<<endl;
    
    Test *t;
    //cout<<t->getxTest()<<endl;


}