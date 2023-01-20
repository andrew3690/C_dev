# include <iostream>
# include <cmath>
using namespace std;

int main(){
    // Sum of first N natural numbers 
    // int sum = 0,n = 10;
    // for(int i = 0; i <= n; i++){
    //     sum += i;
    //     cout<<sum<<endl;
    // }

    // Factorial Number
    // int n = 5,fact =1;
    // for(int i = 1;i <= n;i++){
    //     fact = fact *i;
    // }
    // cout<<fact;
    
    // Factors
    // int n = 10;
    // for(int i = 1;i <=n;i++){
    //     if(n % i == 0){
    //         cout<<i<<endl;
    //     }
    // }

    // Perfect Number
    int n, sum = 0;
    for(int i = 1;i <=n;i++){
        if(n % i == 0){
            sum += i;
        }
    }
    cout<<sum;
}