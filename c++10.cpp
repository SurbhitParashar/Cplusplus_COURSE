#include<iostream>
using namespace std;
int main(){

    // POINTERS -->> datatypes which holds the address of other datatype
    int a =8;
    int* b = &a;
    // & --> address of operator
    // cout<<"the address of a is : "<<b<<endl;  
    // cout<<"the address of a is : "<<&a<<endl;  

    // * --> (use when find value at some address) derefrence operator

    // cout<<"the value at address b is : "<<*b;
    
    

    // POINTER TO POINTER 
    int** c = &b;
    cout<<"the address of b is : "<<c<<endl;
    cout<<"the address of b is : "<<&b<<endl;
    cout<<"the value at address c : "<<*c<<endl;
    cout<<"the value at value at address c : "<<**c<<endl;
    return 0;
}