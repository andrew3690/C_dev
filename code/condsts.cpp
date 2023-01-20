# include <iostream>
# include <cmath>
using namespace std;

int main(){
    // Maximum value
    // int x,y;
    // cout<<"Enter 2 numbers"<<endl;
    // cin>>x>>y;
    // if(x > y){
    //     cout<<"x is greater than y"<<endl;
    // }
    // else{
    //     cout<<"y is greater than x"<<endl;
    // }

    // Positive or Negative
    // int n;
    // if (n < 0){
    //     cout<<"negative";
    // }
    // else{
    //     cout<<"positive";
    // }

    // Odd or even
    // int n;
    // if(n % 2 != 0){
    //     cout<<"odd";
    // }
    // else{
    //     cout<<"even";
    // }

    // Working hours
    // int hour = 12;
    // if (hour >= 9 && hour <= 18){
    //     cout<<"working";
    // }else{
    //     cout<<"leisure";
    // }

    // Verifying age
    // int age = 51;

    // if(age >= 12 && age <= 50){
    //     cout<<"young";
    // }else{
    //     cout<<"not young";
    // }

    // Elegibility check
    // int age = 13;
    // if(age <= 12 || age >= 50){
    //     cout<<"elegible";
    // }else{
    //     cout<<"not elegible";
    // }

    // Finding Maximum of 3 numbers
    // int a=5,b=4,c=3,max;
    // if(a < b){
    //     max = b;
    //     if( max < c){
    //         cout<<c;
    //     }
    //     else{
    //         cout<<max;
    //     }
    // }
    // else{
    //     max = a;
    //     if( max < c){
    //         cout<<c;
    //     }else{
    //         cout<<max;
    //     }
    // }

    // Verifying discriminant
    // int a = 1,b = 6,c = 5;
    // float d,r1,r2;
    // // cout<<"input a,b,c:";
    // // cin>>a>>b>>c;
    // d = (b*b) - 4 * a * c;
    // if(d = 0){
    //     r1 = -b/(2*a);
    //     cout<<"real and equal "<<r1;
    // } 
    // else 
    // {
    //     if (d > 0){
    //         r1 = (b - sqrt(d))/2*a;
    //         r2 = (b + sqrt(d))/2*a;
    //         cout<<"real and unequal "<<r1<<" "<<r2;
    //     } 
    //     else {
    //         cout<<"imaginary";
    //     }
    // }

    // Student Marks
    // int m1 = 100 ,m2 = 60,m3 = 100;
    // float Total, Avg;

    // Total = m1 + m2 + m3;
    // Avg = Total /3;

    // if(Avg >= 60){
    //     cout<<"A";
    // } else {
    //     if(Avg >= 35 && Avg < 60){
    //         cout<<"B";
    //     }
    //     else{
    //         cout<<"C";
    //     }
    // }

    // Discounted Bill
    // int amount;
    // float disAmount;
    // if(amount >= 5000){
    //     disAmount = 20;
    //     disAmount = amount - ((amount * disAmount)/100);
    //     cout<<disAmount;
    // } else{
    //     if( amount >= 2000 && amount < 5000){
    //         disAmount = 10;
    //         disAmount = amount - ((amount * disAmount)/100);
    //         cout<<disAmount;
    //     } else{
    //         disAmount = 5;
    //         disAmount = amount - ((amount * disAmount)/100);
    //         cout<<disAmount;
    //     }
    // }

    // Day of the week (if else ladder)
    // int ;
    // if( == 1)
    //     cout<<"sun";
    // if( == 2)
    //     cout<<"mon";
    // if( == 3)
    //     cout<<"tue";
    // if( == 4)
    //     cout<<"wen";
    // if( == 5)
    //     cout<<"thu";
    // if( == 6)
    //     cout<<"fri";
    // if( == 7)
    //     cout<<"sat";

    // Month Name
    // int m;
    // if(m == 1)
    //     cout<<"jan";
    // else if(m == 2)
    //     cout<<"feb";
    // else if(m == 3)
    //     cout<<"mar";
    // else if(m == 4)
    //     cout<<"apr";
    // else if(m == 5)
    //     cout<<"may";
    // else if(m == 6)
    //     cout<<"jun";
    // else if(m == 7)
    //     cout<<"jul";
    // else if(m == 8)
    //     cout<<"agu";
    // else if(m == 9)
    //     cout<<"sep";
    // else if(m == 10)
    //     cout<<"oct";
    // else if(m == 11)
    //     cout<<"nov";
    // else if(m == 12)
    //     cout<<"dec";

    // Digit name
    // int d;
    // if(d == 1)
    //     cout<<"one";
    // else if(d == 2)
    //     cout<<"two";
    // else if(d == 3)
    //     cout<<"three";
    // else if(d == 4)
    //     cout<<"four";
    // else if(d == 5)
    //     cout<<"five";
    // else if(d == 6)
    //     cout<<"six";
    // else if(d == 7)
    //     cout<<"seven";
    // else if(d == 8)
    //     cout<<"eight";
    // else if(d == 9)
    //     cout<<"nine";
    // else if(d == 0)
    //     cout<<"zero";

    // Day of the week (switch case)
    // int x;
    // switch(x){
    //     case 2: cout<<"mon";
    //         break;
    //     case 3: cout<<"tue";
    //         break;
    //     case 4: cout<<"wed";
    //         break;
    //     case 5: cout<<"thu";
    //         break;
    //     case 6: cout<<"fri";
    //         break;
    //     case 7: cout<<"sat";
    //         break;
    //     case 1: cout<<"sun";
    //         break;
    // }
    // return 0;

    //Arithmetic Operations
    // int choice, x, y;

    // switch (choice)
    // {
    // case 1:
    //     cout<<x+y;
    //     break;
    // case 2:
    //     cout<<x-y;
    //     break;
    // case 3:
    //     cout<<x*y;
    //     break;
    // case 4:
    //     cout<< x/y;
    //     break;
    // default:
    //     break;
    // }

    //Discount Bill
    // int Billamount = 500;
    // float Billdisc;
    
    // if(Billamount < 100){
    //     cout<< Billamount;
    // } else{
    //     if (Billamount >= 100 && Billamount < 500){
    //         Billdisc = 10;
    //         Billamount = Billamount - ((Billamount * Billdisc)/100);
    //         cout<< Billamount;
    //     }else{
    //         Billdisc = 20;
    //         Billamount = Billamount - ((Billamount * Billdisc)/100);
    //         cout<< Billamount;
    //     }
    // }

    //Leap Year
    // int year = 2004;
    // if(year % 4 == 0 && year % 100 ==0){
    //     cout<<"Leap year";
    // }else{
    //     cout<<"Not Leap year";
    // }

    
    switch (10&6)
    {
    case 1:cout<<"One ";
    
    case 2: cout<<"Two ";
    
    case 3: cout<<"Three";
    }
}