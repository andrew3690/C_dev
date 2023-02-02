#include <iostream>
using namespace std;

class Employee{
    private:
        int matr;
    
    protected:
        char name;
        int salary;
        int hours;

    public:
        Employee(&e);
        void setmatr(int m){e.name = m;}
        void setname(string name){name = e.name;}
        void setsalary(int sal){e.salary = sal;}
        void sethours(int hours){e.hours = hours;}
        int getmatr(){return e.matr;}
        char getname(){return e.name;}
        int getsalary(){return e.salary;}
        char gethours(){return e.hours;}
};

class Fullemployee: public Employee{
    private:

    protected:

    public:
        Fullemployee(&f);
        Fullemployee(int matr,char name, int salary, int hours);
        char Employee_name(){return f.getname();}
        void verify_name(){
            if(f.gethours() < 6){
                cout<<"Part time employee"<<endl;
                f.setsalary(2500);
            }else {
                cout<<"Full time employee"<<endl;
                f.setsalary(4500);
            }
        }        
};

class Partemployee: public Fullemployee{
private:

    protected:

    public:
        Partemployee(&p);
        Partemployee();
        Partemployee(int matr,char name, int salary, int hours);
        char Employee_name(){return f.getname();}
        void verify_name(){
            if(f.gethours() < 6){
                cout<<"Part time employee"<<endl;
                f.setsalary(2500);
            }else {
                cout<<"Full time employee"<<endl;
                f.setsalary(4500);
            }
        }        
};

int main(){
    Partemployee p;
    p.setname("André");
    p.setsalary(4500);
    p.setmatr(14736466674);
    p.verify_name();
    return 0;
}