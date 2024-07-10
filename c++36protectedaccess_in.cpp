#include<iostream>
using namespace std;

class base{
    protected:
        int a; 
           // a is a private member but we want only that derived class have access to it
           // we dont want a to be public variable 
           // a private rahe lekin inherite ho jaye

    private:
        int b;
// friend is a function which can be used when we want ki outside function can access private members 
// of a class
// here we want a public na ho but ek other derived class usko access kr sake
};

class derived : protected base {

};
/*
For a protected member:  public derivation   private derivation   protected derivation
these are members of base class
1. private               not inherited       not inherited        not inherited 
2. protected             protected           private              protected 
3. public                public              private              protected
*/
int main(){
    base b;
    derived d;
    // cout<<b.a; // this will not work because a is protected in base and derived class
    return 0;
}