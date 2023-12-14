using namespace std;
#include <iostream>
template<class T>

class Aritmetic{
    private:
    T a;
    T b;

    public:
        Aritmetic(T a, T b);
        T add();
        T sub();
};

template <class T>
Aritmetic<T>::Aritmetic(T a, T b){
    this->a = a;
    this->b = b;
}

template <class T>
T Aritmetic<T>::add(){
    return this->a + this->b;
}

template <class T>
T Aritmetic<T>::sub(){
    return this->a - this->b;
}

int main(){
    Aritmetic <int> ar(10,5);
    cout << ar.add() << endl;

    Aritmetic <float> fr(10,6.7);
    cout << fr.add() << endl;
}