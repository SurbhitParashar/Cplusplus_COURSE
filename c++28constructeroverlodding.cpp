#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
 
    complex(int x){
        a=x;
        b=0;
    }

    complex(){
        a=0;
        b=0;
    }

    void printnum(void){
        cout<<"your complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex a(4,6);
    a.printnum();

    complex b(5);
    b.printnum();

    complex c;
    c.printnum(); 
    return 0;
}