#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // const int a = 889; // const function is used to specify a value without further changing it 
    // a=9;
    // cout<<"The value of a : "<<a;

    // ****************MANIPULATORS*****************
    // cout<<"the value of a is : "<<setw(5)<<a<<endl;
    // cout<<"the value of a is : "<<a;

    // ****************OPERATOR PRECEDENCE**************
    int a=3,b=4;
    int c=a*5+b;
    cout<<c;

    
    return 0;
}