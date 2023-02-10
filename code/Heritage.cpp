#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle();
        void setlen(int x);
        void setbre(int y );
        int getlen();
        int getbre();
        int area();
};

void Rectangle::setbre(int x){
    this->breadth = x;
}

void Rectangle::setlen(int y){
    this->length = y;
}

int Rectangle::getlen(){
    return this->length;
}

int Rectangle::getbre(){
    return this->breadth;
}

int Rectangle::area(){
    cout<<"AREA: ";
    return this->getlen() * this->getbre();
}

class Cuboid:public Rectangle {
    private:
        int heigth;
    
    public:
        Cuboid();
        int volume();
        void setheigth(int z);
        int getheigth();
};

void Cuboid::setheigth(int z){
    this->heigth = z;
}

int Cuboid::getheigth(){
    return this->heigth;
}

int Cuboid::volume(){
    cout<<"Volume: ";
    return getlen() * getbre() * getheigth();
}

int main (){
      Cuboid c;
      c.setheigth(10);
      c.setbre(4);
      c.setlen(8);
      c.area();
      c.volume();
}