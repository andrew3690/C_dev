# include <iostream>
# include <cmath>
using namespace std;

// Bank Class
class Bank{
    private:
        string name;
        bool Accountisopen;

    public:
        Bank &b;
        void OpenAccount(string code, string name, int val);
        void CloseAccount(string code);
        
        virtual void getcname();
        virtual string setcname(string name);
        virtual int setval(int val);
        virtual void getval();
        virtual int withdraw(int money);

    // Client class
    class Client{
        string name;
        int val;
        string code;

        public:
        Client &c;
        void getcname();
        string setcname(string name);
        int setval(int val);
        void getval();
        int withdraw(int money);
        int transferr(Client c1, Client c2,int val);
    };

};

int main(){
    Bank *boa; //Bank of America pointer

    return 0;
}
