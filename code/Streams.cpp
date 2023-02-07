#include<fstream>
#include<iostream>
using namespace std;

// creating class Student and it's atributes
class Student {
    public:
    string name;
    int roll;
    string branch;

};

int main(){
    // opening file
    ofstream ofs("test.txt",ios::trunc);
    //writing stuff at the file
    ofs<<"Hello"<<endl;
    //closing the file
    ofs.close();

    // reading data from file
    // opening the file
    ifstream ifs ("test.txt");
    // setting variables names and types
    string name; 
    int roll;
    string branch; 
    
    //inputing data into the file 
    ifs>>name>>roll>>branch;
    // closing the file
    ifs.close();

    // outputing variables names
    cout<<"Name "<<name<<endl;
    cout<<"Roll "<<roll<<endl;
    cout<<"Branch "<<branch<<endl;

    // instatiating class and setting it's atributes
    Student s1;
    s1.name = "Yuri";
    s1.roll=102;
    s1.branch="CS";

    // inserting atributes on txt file
    ofstream ofs("Student.txt",ios::trunc);
    ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;
}