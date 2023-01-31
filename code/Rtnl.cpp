#include <iostream>
using namespace std;

class Rational{
    private:
    int q;
    int p;

    public:
    int setnum(int q1,int p1);
    friend Rational operator+(Rational a1, Rational a2);
    friend ostream & operator<<(ostream &o, Rational r);
    
    Rational(int p, int q){
        this->p=p;
        this->q=q;
    }
};

int Rational::setnum(int q1,int p1){
    this->p = p1;
    this->q = q1;
}

ostream & operator<<(ostream &o, Rational r){
    o<<r.p<<"/"<<r.q<<endl;
    return o;
}


int main(){

}