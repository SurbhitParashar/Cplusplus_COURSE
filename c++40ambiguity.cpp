#include<iostream>
using namespace std;

// AMBIGUITY 1
/* 
class base1{
    public:
        void greet(){
            cout<<"Hare Krishna"<<endl;
        }
}; 

class base2{
    public:
        void greet(){
            cout<<"Namaste"<<endl;
        }
};

class derived : public base1, public base2{
    public:
        void greet(){
            base1::greet();
        }
};
*/

// AMBIGUITY 2
/*
*/

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D : public B{
    // if we define say function here also so it will prefer it and overwrite outside say function 
    public:
        void say(){
            cout<<"hello my RTUians"<<endl;
        }

};

int main(){
    // base1 b;
    // b.greet();
    // derived surbhit;
    // surbhit.greet();
    

    D d;
    d.say();
    return 0; 
}