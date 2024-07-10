/*
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int,int); //constructor decleration

    void printnum(void){
        cout<<"the number is : "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(int x,int y){ 
    a=x;
    b=y;
}

int main(){
    // IMPLICIT CALL 
    complex a(4,5);
    a.printnum();
    
    // EXPLICIT CALL
    complex b = complex(9,4);
    b.printnum();

    return 0;
}

*/

#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
        point(int a,int b){
            x=a;
            y=b;

        }

        void printpoint(void){
            cout<<"the coordinates are ("<<x<<","<<y<<")"<<endl;
        }
};

int main(){
    point p(4,8);
    p.printpoint();

    return 0;
}

