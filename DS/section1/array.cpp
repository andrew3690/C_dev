using namespace std;
#include <iostream>

int main(){
    //  It can be skipped
    int array[5] = {4,5,6,7,8};
    
    int array1;

    for(int i = 0; i < 10; i++){
        cout << "value:" << array[i] << "\n";
    }

    for (int x:array){
        cout << x <<endl;
    }


    cout << "array:"<< array[1] <<"\n";
    cout << "array:"<< array1 <<"\n";

}