#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void set_data(int a){
        // a=a; // agar is tarike se likhte h to priority di jati h local variables ko isliye error aa jata h
        this->a=a; 
    }
    void get_data(){
        cout<<"the value of a is : "<<a;
    }
};

int main(){
    // this is a keyword which is a pointer which point to the object which invoke the member function
    A test;
    test.set_data(4);
    test.get_data();
    return 0;
}