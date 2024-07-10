#include<iostream>
using namespace std;

// void swapointer(int* a,int* b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }

void swapreferencevar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){ 
    int x=4,y=9;
    // cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    // swapointer(&x,&y);// using pointer reference
    // cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;

    swapreferencevar(x,y);
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    return 0;
}