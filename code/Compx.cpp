#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;

    public:
        void setcomp(int a, int b);
        int add(Complex x);
        void getcomp();
    
    friend Complex operator+(Complex c1, Complex c2);
    friend ostream & operator<<(ostream &o, Complex &c1);

    // Version without Friend function declaration
    // Complex operator+(Complex c){
    //     Complex temp;
    //     temp.real = real +c.real;
    //     temp.img = img + c.img;
    //     return temp;
    // }
};

// First version
// int Complex::add(Complex p){
//     Complex temp;
//     temp.real = temp.real + p.real;
//     temp.img = temp.img + p.img;
//     return temp;
// }

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real +c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

ostream & operator<<(ostream &o, Complex &c1)
{
    o<<c1.real<<" +i"<<c1.img<<endl;
    return o;
}

void Complex::setcomp(int a, int b){
    Complex::real = a;
    Complex::img = b;
}

void Complex::getcomp(){
    cout<<" "<<this->real<<"+"<<this->img<<"i"<<endl;
}

int main(){
    Complex plex, plex1,plex2;
    plex1.setcomp(7,9);
    plex.setcomp(7,8);

    plex.getcomp();
    plex1.getcomp();

    plex2 = plex1 + plex;
    cout<<plex2;
}