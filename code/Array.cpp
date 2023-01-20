# include <iostream>
# include <cmath>
using namespace std;

int main(){
    //  Drawing patterns
    // int count = 1; 
    // for (int i = 0;i <= 4;i++){
    //     for(int j = 0; j <= 4; j++){
    //         cout<<" "<<count;
    //         count++;
    //     }
    //     cout<<" "<<endl;
    // }

    // Drawing:
    // * 
    // ** 
    // *** 
    // **** 
    // ***** 
    // for(int i = 0;i <= 4;i++){
    //     for(int j = 0;j <= 4;j++){
    //         if(i >= j)
    //             cout<<"*";
    //     }
    //     cout<<" "<<endl;
        
    // }
    
    // Drawing:
    // **** 
    // *** 
    // ** 
    // * 
    // for(int i = 0;i <= 4;i++){
    //     for(int j = 0;j <= 4;j++){
    //         if(i < j)
    //             cout<<"*";
    //     }
    //     cout<<" "<<endl;
    // }

    
    int n = 5;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i + j > n -1)
                cout<<"*";
        }
        cout<<" "<<endl;
    }


}