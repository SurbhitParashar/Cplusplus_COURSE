#include<iostream>
using namespace std;

class practice{
    int real,imaginary;
    public:
        int set_data(int a,int b){
            real=a;
            imaginary=b;
        }
        void get_data(){
            cout<<"the real value is : "<<real<<endl;
            cout<<"the imaginary value is : "<<imaginary<<endl;
        }
};

int main(){
    // ptr ne class p ka address save kr rakha h
    // practice p;
    // practice *ptr = &p; // pointer me jab ham class ka address save karenge to * isse se phele class ka name ayega
    practice *ptr = new practice; 
    // (*ptr).set_data(45,89); 
    // it can also be used as by arrow operator
    ptr->set_data(45,89);   
    (*ptr).get_data();
    // cout<<*(ptr); // we can only see address of class can't revert address to value
    return 0;
}

// arrow operator --> (->) iska matlab hota h ptr ko derefrence karo aur isko setdata run karo 