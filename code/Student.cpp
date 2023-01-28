#include<iostream>
using namespace std;

class Student{
    private:
        int mathmarks;
        int histmarks;
        int geomarks;
        string name;
        int roll;

    public:
        Student(int roll, string name, int mathmarks, int histmakrs, int geomarks);
        void Getmarks();
        void Getname();
        void Getroll();
        int Setmarks(int n,int m, int h);
        char Setname(char g);
        int Setroll(int m);
        int Totalmarks();
        int Averagegrade();
};

void Student::Getname(){
    cout<<name;
}

void Student::Getroll(){
    cout<<roll;
}

void Student::Getmarks(){
    cout<<"Math: "<<mathmarks<<" Geography: "<<geomarks<<" History: "<<histmarks<<endl;
}

int Student::Setmarks(int mathmarks, int histmarks, int geography){
    this->mathmarks = mathmarks;
    this->geomarks = geography;
    this->histmarks = histmarks;
}

char Student::Setname(char name){
    this->name = name;
}

int Student::Setroll(int roll){
    this->roll = roll;
}

int Student::Totalmarks(){
    return this->histmarks + this->mathmarks + this->geomarks;
}

int Student::Averagegrade(){
    float avg =(this->histmarks + this->mathmarks + this->geomarks)/3; 
    if(avg < 5.75){
        cout<<"Student not aproved";
        return avg;
    } else{
        cout<<"Student aproved";
        return avg;
    }
}

int main(){
    int roll;
    string name;
    int math, history, geography;

    Student s(roll,name, math, history,geography);
    
    cout<<"Student situation: "<<s.Averagegrade();
}