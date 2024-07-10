#include<iostream>
using namespace std;

class number{
    int a;
    
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    //when there is no copy constructer made by us so compiler provide its own copy constructer
    number(number &obj){
        cout<<"copy constructer";
        a=obj.a;
    }

    void displaynum(){
        cout<<"the number for this object is : "<<a<<endl;
    }

};

int main(){
    number x(4),y,z, z2;
    x.displaynum();
    y.displaynum();
    z.displaynum();
    number z1(x);  // copy constructer invoke
    z1.displaynum();

    z2=z; // copy constructer not call here because it has been made already 
    z2.displaynum();  // agar ye yaha pr ban raha hota to wo call hota

    number z3 = z;
    z3.displaynum();

    // number a = number(4);
    // a.displaynum();
    return 0;
}