#include <iostream>
#include <vector> // calling vector data structure
#include <list>   // calling list data strcuture
#include <map>    // calling map data structure
using namespace std;

int main()
{
    //forward_list // linked-list
    //list // default list
    vector<int> v = {10,20,30,40};
    v.push_back(25);
    v.push_back(70);
    v.push_back(33);
    v.pop_back();
    
    //forward_list
    //list
    vector<int>::iterator itr = v.begin();

    for(itr =v.begin(); itr != v.end(); itr++){
        cout<<*itr<<endl;
    }
    // or using a foreach
    for(int x:v){
        cout<<x<<endl;
    }
    
    map<int,string> m; // map data strcuture, that maps elements througth indexes
    m.insert(pair<int,string>(1,"jhon"));
    m.insert(pair<int,string>(2,"Ravi"));
    m.insert(pair<int,string>(3,"Khan"));
    map<int,string>::iterator itr;

    /* 
    for(itr =v.begin(); itr != v.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    */
   
    map<int,string>::iterator itr1;
    itr1 =m.find(2);

    return 0;
}
