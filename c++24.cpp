#include <iostream>
using namespace std;

// when function is independent then we use friend function as --> friend here_is_function_name(___);
// and if we want to allow private info of class to a particular function of other class then use like this
// friend datatype class_name :: function_name(___);

//  FORWARD DECLERATION
class complex; // this will ensure compiler that class complex is there present niche

class calculator{
public:
    int sumrealcomplex(complex, complex); // we cannot write o1and o2 here because complex class niche
    int sumcompcomplex(complex,complex); //    h and abhi ise nahi pata o1 and o2 kya h
};

class complex{
    int a, b;
    // friend int calculator :: sumrealcomplex(complex o1, complex o2);
    // friend int calculator :: sumcompcomplex(complex o1, complex o2);
    friend class calculator; // to declare whole class friend

public:
    void getnum(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printnum(void){
        cout << "the number is " << a << "+" << b << "i";
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2){
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1,complex o2){
    return (o1.b+o2.b);
}

int main(){
    complex s1, s2, s3;

    s1.getnum(1, 2);
    s2.getnum(4, 9);

    calculator calc;
    cout<<"The sum of real part of complex is : "<<calc.sumrealcomplex(s1, s2)<<endl;
    cout<<"The sum of imaginary part of complex is : "<<calc.sumcompcomplex(s1,s2)<<endl;
    return 0;
}