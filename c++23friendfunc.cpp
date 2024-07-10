#include<iostream>
using namespace std;

class complex{
    int a,b;
    
    public:
        friend complex sumcomplex(complex o1,complex o2);
        
        void getnum(int n1,int n2){
            a=n1;
            b=n2;
        }

        // void complexnumsum(complex o1, complex o2){
        //     a=o1.a+o2.a;
        //     b=o1.b+o2.b;
        //     cout<<"final sum of complex numeber is :"<<a<<"+"<<b<<"i";
        // }
        void printnum(void){
            cout<<"the number is "<<a<<"+"<<b<<"i";
        }
        
};

complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.getnum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex s1,s2,s3;
    s1.getnum(1,2);
    s2.getnum(2,3);

    // s3.complexnumsum(s1,s2);
    s3=sumcomplex(s1,s2);
    s3.printnum();
    return 0;
}