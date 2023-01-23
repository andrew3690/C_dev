#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
/* 
    // Declaring and initialising string
    char x='A';

    char S[10] = "hello"; // array which has size of 10 but has only 5 elements
    cout<<S<<endl;
    
    char P[] = "hello"; // array which contains the exact size of elements
    cout<<P<<endl;
    
    char G[]= {'H','e','l','l','o','\0'};
    cout<<G<<endl;

    char H[] ={65,66,67,68,0,69,70};
    cout<<H<<endl;
*/

/* 
    char s[1],g[1];
    cout<<"Enter your name:";
    cin.getline(s,20); // assing variable with size of 20 and array accepts space values
    cout<<"Welcome "<<s<<endl;

    cin.ignore(); // clears the keyboard buffer

    cout<<"Enter your name:";
    cin.getline(g,20); // assing variable with size of 20 and array accepts space values
    cout<<"Welcome "<<g<<endl; 
*/

/* 
    char s[50] = "Hello";
    cout<<strlen(s)<<endl; 
*/

/* 
    // geting the size of a string with strlen
    char s[50]="Hello";
    cout<<strlen(s)<<endl;
 */

/* 
    char *s;
    cout<<"Enter string";
    cin.getline(s,100); // using getline to obtain line of input with the size of 100 for string length

    cout<<"Length :"<<strlen(s); // returns the length of the word
 */

/* 
    // Concatenates s1 and s2 strings, giving three spaces after string division printing "GoodMor"
    char s1[20]= "Good";
    char s2[20]= "Morning";

    strncat(s1,s2,3);

    cout<<s1<<endl;
 */

/* 
    // It can be defined how many characteres must be copied from string s1, to s2, (just by including a ",N" N being the number of characteres to be copy)
    char s1[20]= "Good";
    char s2[10]= "";

    strcpy(s2,s1);
    cout<<s2<<endl;
 */

/* 
    //getting a substring in other string 
    char s1[120]="Programing";
    char s2[10]="k";

    if(strstr(s1,s2) != NULL){
        cout<<strstr(s1,s2)<<endl;
    }
    else
        cout<<"Not Found"<<endl;


    char s1[20]="Programming";

    cout<<strchr(s1,'m')<<endl;
*/

/* 
    // compares the size of two strings
    // if the result is positive, than str1 is bigger than str2, because the count is done as len = strlen(str1) - strlen(s2)
    // else if len is negative, str2 bigger than str2
    // if their len are equal the result is 0;

    char str1[20] = "Hello";
    char str2[20] = "Bye";

    cout<<strcmp(str1,str2)<<endl;
 */    

/* 
    // this function can transform string characteres into numeric data type
    char s1[20] = "235";
    char s2[20] = "54.78";

    long int x = strtol(s1,NULL,10);
    float u = strtof(s2,NULL);

    cout<<x+10<<endl<<u-5<<endl;
 */

/* 
    // function that extracts string values based on conditions, as it can be seen bellow
    char s1[20] = "x=10;y=20;z=35";
    
    char *token=strtok(s1,"=;");
    
    while(token != NULL){
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
 */

/* 
    // method that allows get several words
    string str;
    cout<<"enter a string ";
    getline(cin,str);

    cout<<str<<endl;
 */

/* 
    string s1="hello";

    cout<<s1.length()<<endl; // both return the size of a string
    cout<<s1.size()<<endl;
    
    cout<<s1.capacity()<<endl; // return the capacity of the string (depends on compiler)
    s1.resize(30);             // resizes the string in order to get 30 characteres size
    cout<<s1.max_size()<<endl; // returns the max size of characteres that can be put into a string 
    s1.clear();                // clears the value of the string
    if(s1.empty()){            // checks if the string is empty
        cout<<"is empty"<<endl;
    }else{
        cout<<"not empty"<<endl;
    }
 */

/* 
        string s1="hello";

        s1.append(" World"); // appends string to another
        cout<<s1<<endl;

        cout<<s1.capacity()<<endl;
        s1.append(" hi ma'n, oh no you are gay");

        cout<<s1<<endl;

        s1.insert(3,"kk",2); // inserts the string value at the position required
        cout<<s1<<endl;
 */

/* 
        string s1="programing";
        s1.replace(3,4,"KK"); // it replaces strings taking the following
        // 3 -> position of the string that will be replaced
        // 4 -> how many chars must be replaced
        cout<<s1<<endl;
 */

/* 
    string s1="programing";
    s1.erase(); // ereases the string
    cout<<s1<<endl;
 */

/* 
    string s1="programing";
    s1.push_back('z'); // concatenates the string at the end of the first one
    cout<<s1<<endl;

    s1.pop_back(); // takes out the last string at the end of the first one
    cout<<s1<<endl;
 */

/* 
        string s1="programing";
        string s2=" C++";
        s1.swap(s2); // swaps the two words 

        cout<<s1<<endl;
        cout<<s2<<endl;
 */
/* 
    string s = "welcome";
    char s1[10];

    s.copy(s1, s.length()); // copies the value of a string to another string type variable, based on the number of strings that must be passed by the second value 

    cout<<s1<<endl;
 */

/* 
    string s = "how are you";
    cout<<s.find("are")<<endl; // seeks the first letter of the string that is being searched from left to the right, returning a number
    cout<<s.rfind("are")<<endl; // seeks the first letter of the string that is being searched from right to the left, returning a number
    cout<<s.rfind("is")<<endl;// if the string isn't there, it depends on implementation, on how it will show the value is not there

 */
/* 
    string s = "how are you";
    cout<<s.find_first_of("a")<<endl; // returns the index of the letter, searching from right to the left
    cout<<s.find_last_of("w")<<endl;  // returns the index of the letter, searching from left to the right

 */    

/* 
    string s = "some string";
    cout<<s.substr(3,6)<<endl; // gets a sample of values from one point in index to another, taking a dimension of letters

    string h = "some strnng";

    cout<<s.compare(h)<<endl; // verifies if they are equal, if true returns 0, else returns 1
    // in case of them being diferent it returns the subtraction of values s - h, giving a positive value if s is grater than h
    // negative if s is less than h 
 */
/* 
    string str = "holiday";

    cout<<str.at(4)<<endl; // gets the string at the index place
    cout<<str.front()<<endl; // gets the first letter of the string
    cout<<str.back()<<endl; // gets the last letter of the string

    string str2 = "happy ";
    
    cout<<str2[2]<<endl; // strigs are just a concatentation of letters, so basically they are arrays of letters, so thay can be acessed as the same way of strings
    
    cout<< str2 + str<<endl; // concatenation of strings can be assinged to another variable
 */
/* 
    string str = "today";

    string::iterator it; // special variable that assings an iterator over a string getting letter by letter

    for(it=str.begin();it != str.end();it++){ // loop that gets the begining of the string and goes until the end of it,using the iterator
        *it = *it - 32; // decrementing by 32 gets the Upper value of the string in the ASCII table
    }
    cout<<*it<<endl;

    for(int i=0; str[i] != '\0';i++){ // same ideia as the one above, but without using class string
        str[i]= str[i] - 32;
    }
    cout<<str<<endl;
 */
/* 
    // Getting the lenght of a string
    string s1 = "hey here is some serious text";
    cout<<s1.length()<<endl;

    // Change cases of letters
    string s2 = "hey i'm gonna change some letters here";
    
    string::iterator it;

    for(it=s2.begin(); it != s2.end();it++){
        *it = *it - 32;
        cout<<*it;
    }

*/  
/*   
    // Couting vowels and words in a string
    string s3 = "how many words";

    int voewls = 0, consoants = 0, spaces = 0;

    // couting vowels
    for(int i = 0; s3[i] =! '\0'; i++){
        if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u'){
            voewls++;
        } else if(s3[i] == ' '){
            spaces++;
        }
        else {
            consoants++;
        }
    }
    cout<<"The number of vowels is "<<voewls<<endl;
    cout<<"The number of consoants is "<<consoants<<endl;
    cout<<"The number of spaces is "<<spaces<<endl;
 */
/* 
    //Checking palindrome
    string s1 = "ovo"; // palindrome string
    string s2 = "";    // empty string

    int len = (int)s1.length(); // getting length of string
    s2.resize(len);             // resizing string 

    for(int i = 0, j=len -1; i<len; i++,j--){ // loop that declares two variables, taking a loop from the begining of the string using
                                              // it takes from the bottom to the left incrementing , j takes the top to the right decrementing it
        s2[i] = s1[j];
    }
    s2[len] = '\0'; // getting the last character of the string
    
    // comparing values using compare method
    if(s1.compare(s2) == 0)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
*/    

/* 
    //Finding username in email address
    string email = "jhon123@gmail.com";
    int len = (int)email.find('@'); // making a point for slicing the string

    string username = email.substr(0,len); // creating a substring from 0 position to the position of @ character

    cout<<"user name is "<<username<<endl; // finally getting the useraname 

 */    
    return 0;
}