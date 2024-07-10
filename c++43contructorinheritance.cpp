#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
        base1(int a){
            data1=a;
            cout<<"base 1 constructor is called"<<endl;
        }
        void print_data1(){
            cout<<"the value of data 1 is : "<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int a){
            data2=a;
            cout<<"base 2 constructor is called"<<endl;
        }
        void print_data2(){
            cout<<"the value of data 2 is : "<<data2<<endl;
        }
};

class derived : public base1, public base2{
    int derived1,derived2;
    public:
    derived(int a,int b, int c, int d): base1(a), base2(b){ // ham ese bhi inisialize kr sakte h nhi to fer 
        derived1=c;                                         // individually inisialize nhi karna padega
        derived2=d;                                         // like base1 b(); ...
    }
    void result(){
        print_data1();
        print_data2();
        cout<<"values of derived1 is : "<<derived1<<endl
            <<"values of derived2 is : "<<derived2<<endl;
    }
};

int main(){
    derived d(1,2,3,4);
    d.result();
    return 0;
}