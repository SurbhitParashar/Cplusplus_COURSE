#include<iostream>
using namespace std;

class simple{
    int d1,d2;
    public:
    simple(int a,int b=5){ // we can give here default value 
        d1=a;
        d2=b;
    }
    void printnum();
};

void simple :: printnum(){
    cout<<"the value of data is "<<d1<<" and "<<d2<<endl; 
}
int main(){
    simple s(2,9);
    s.printnum();
    return 0;
}