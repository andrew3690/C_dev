# include <iostream>
using namespace std;

// Note: object will consume memory one
// y for data members. Functions will be common for all the objects in memory 
//Default constructor
class Rectangle{
    private: // by default, everything that isn't inside public scope is private 
    int length;
    int breadth;

    public:
    // Constructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    // Acessors
    void getLength();
    void getBreadth();
    // Mutator
    void setLength(int l);
    void setBreadth(int m);
    //Facilitators
    int area();
    int perimeter();
    bool isSaqure();
    inline int triangle(); // inline function that resolves it in a single line (could be here in declaration), their code will be generated inside the main function
    // Destructor
    ~Rectangle();
/* 
    //Usage of "this" pointer
    Rectangle(int length, int breadth){
        // it can re-use names of varaibles without making any confusion about it
        this->length=length; 
        this->breadth=breadth;
    }
 */

/*     
    // These are mutator classes, they can only reassing values
    // sets Length
    void setLength(int l){
        if(l >= 0 )
            length =l;
        else
            length = 0;
    }
    //sets Breadth
    void setBreadth(int m){
        if(m >= 0)
            breadth = m;
        else
            breadth = 0;
    }

    // These are acessor classes, they can only show the values
    // gets Length
    int getLength(){
        return length;
    }
    // gets Breath
    int getBreath(){
        return breadth;
    }

    // These are Facilitators, making operations with the values
    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 *(length + breadth);
    }

    // overloading class throught different types of constructors
    // Non-parametrised: 
    // Simple constructor, without anymore declarations
    Rectangle(){
        length = 0;
        breadth = 0;
    }

    // Parametrised
    // Constructor, using parameters and methods of the language
    Rectangle(int l =0, int b = 0){
        setLength(l);
        setBreadth(b);
    }
 
    // Shallow Copy Constructor
    // gets a reference of a class, and ressings it
    Rectangle( Rectangle &rect){
        length = rect.length;
        breadth = rect.breadth;
    }
/* 
    // Destructor
    ~Rectangle(){
        return 0;
    }
*/
};

// Scope Resoltuion Operator, write it outside the class, otherwise they will become inline a fucntion
Rectangle::Rectangle(){
    length =1;
    breadth =2;
}

int Rectangle::perimeter(){
    return 2 *(length + breadth);
}

int Rectangle::area(){
    return length * breadth;
}

bool Rectangle::isSaqure(){
    return length == breadth;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle is destroyed";
}

// In struct everything is public, this is the main diference bettween classes and structs
struct  Demo
{
    int x;
    int y;

    void Display(){
        cout<<" "<<y<<endl;
    }
};


void main (){ 
/* 
    // simple instatiantion
    Rectangle r1,r2;
    r1.length = 10; 
    r1.breadth = 5;
    cout<<"The area is: "<<r1.area()<<endl;
 */

/* 
    // Pointer calling, creating object in stack
    Rectangle r;
    Rectangle *p;

    /* 
    p = &r;
    r.length =10;
    p->length=10;
    p->breadth=5; 
    */

    //cout<<p->area();
/* 
    // creating object in heap
    Rectangle *p;
    p = new Rectangle;

    Rectangle *v = new Rectangle();

    p->setBreadth(5);
    p->setLength(5);
    cout<<p->area();

 */
/* 
    Rectangle r2(10,10);
    cout<<"Area of the Rectangle is "<<r2.area()<<endl;

    if(r2.isSaqure()){
        cout<<"This is a square";
    }
    else{
        cout<<"Is not a square";
    }
 */
/* 
    Demo d;
    d.x = 10;
    d.y = 20;
    d.Display();
 */
}