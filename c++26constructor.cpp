#include<iostream>
using namespace std;

class complex{
    int a,b;
    // constructor is a type of function used to inisialize and it is made with same name as of class name
    public:
    complex(void); //constructor decleration // these decleration in basic class not in inheritance

    void printnum(void){
        cout<<"the number is : "<<a<<"+"<<b<<"i";
    }
};

complex :: complex(void){  //--> it is a default constructor because it does not take any parameter
    a=10;
    b=0;
}

int main(){
    complex c;
    c.printnum();
    return 0;
}

// properties of constructor 
/*
1. it should be declared in the public section of class
2. it is automatically invoke whenever the object is created 
3. do not have return type (not even void) cannot return value
4. it can have default argument
5. we cannot refer to their address  
*/