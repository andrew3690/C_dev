using namespace std;
#include <iostream>

struct Student{
        int rool;
        char name[25];
        char dept[10];
        char address[50];
};

int main(){
    struct Student su={1 ,"Andre","CCO","Florianopolis"};
    cout << su.name << "\n";
    cout << su.dept << "\n";
    cout << sizeof(su) << "\n";
}