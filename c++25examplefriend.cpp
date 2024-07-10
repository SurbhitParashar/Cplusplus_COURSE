#include<iostream>
using namespace std;

class Y;
class X{
    int n1;
    public:
        void setnum(int num){
            n1=num;
        }
    friend void sum(X,Y);
};

class Y{
    int n2;
    public:
        void setnum(int num){
            n2=num;
        }
    friend void sum(X,Y);

};

void sum(X o1,Y o2){
    cout<<"sum of the above numbers is : "<<o1.n1 + o2.n2;
}

int main(){
    X a;
    a.setnum(2);
    Y b;
    b.setnum(4);

    sum(a,b);

    return 0;
}