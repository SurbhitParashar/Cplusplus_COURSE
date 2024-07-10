#include<iostream>
using namespace std;

class employee{
    private:
        int a,b;

    public:
        int c;
    void setdata(int a1,int b1);
    void getdata(){
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
        cout<<"the value of c is : "<<c<<endl;
    }

};

void employee :: setdata(int a1,int b1){
    a=a1;
    b=b1;
} 

int main(){
    employee surbhit;
    surbhit.c=4;
    surbhit.setdata(1,2);
    surbhit.getdata();

    return 0;
}