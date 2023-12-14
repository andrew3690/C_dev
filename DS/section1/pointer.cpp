using namespace std;
#include <iostream>

struct Student{
        int rool; // 2 bytes
        char name[25]; // 25 bytes 
        char dept[10]; // 10 bytes
        char address[50]; // 50 bytes
};

int main() {
    int A[5] = {2,4,6,8,10};
    int *p;
    p = new int[5]; //

    for(int i = 0;i < 5;i++){
        cout << p[i] << endl;
    }

    p[0] = 10; p[1] = 11; p[1] = 12; p[2] = 13; p[3] = 14;
    for(int i = 0;i < 5;i++){
        cout << p[i] << endl;
    }

    delete [ ] p; // deleting pointer is important to free memory

    // referecing example
    int a = 10;
    int &r = a;

    int b = 30; // in theory "a" and "r" uses the same memory space, but in pratice is otherwise
    r = b;

    cout << a <<endl << r <<endl;
    
    // 
    Student s = {
        1,
        "Andre",
        "CCO",
        "Florianopolis"
    };

    cout << s.name << endl;
    
    Student *t = &s;

    cout << t->name<< endl;
    cout << t->rool <<endl;


    struct Student *o; 

    o = new Student;

    o.
    o->name = "Souza";
    o->dept = 'MTM';



    return 0;
}