using namespace std;
#include <iostream>


struct Rectangle {
    int breath;
    int length;
};

int area( struct Rectangle r){
    return r.breath * r.length;
    cout <<endl;
};

void changelength(struct Rectangle *p, int l){
    p->length = l;
    cout << p->length << endl;
};

int main(){
    struct Rectangle ret = {10,5};
    cout << area(ret);
    changelength(&ret,10);
}
