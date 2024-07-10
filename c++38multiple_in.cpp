#include<iostream>
using namespace std;

// synax for deriving a class from two base class
// class derived : visibility_mode base1, visibility_mode base2{
//   class body
// };

class base1{
    protected:
        int base1value;
    public:
        void setvalue1(int a){
            base1value = a;
        }
        void getvalue1(void){
            cout<<"the value of base1 data is : "<<base1value<<endl;
        }
};

class base2{
    protected:
        int base2value;
    public:
        void setvalue2(int a){
            base2value = a;
        }
        void getvalue2(void){
            cout<<"the value of base2 data is : "<<base2value<<endl;
        }
};

class derived : public base1, public base2{
    public:
        void show(){
            getvalue1();
            getvalue2();
            cout<<"the sum of above two numbers is : "<<base1value+base2value;
        }
};
int main(){
    derived surbhit;
    surbhit.setvalue1(4);
    surbhit.setvalue2(9);
    surbhit.show();
    return 0;
}