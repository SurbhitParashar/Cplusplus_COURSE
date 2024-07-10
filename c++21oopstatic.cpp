#include<iostream>
using namespace std;

class employee{

    int id;
    static int count;
    public:
        void getid(void){
            cout<<endl<<"Enter employee id : ";
            cin>>id;
            count ++;
        }

        void dis_id(void){
            cout<<"Employee id is "<<id<<" and employee number is "<<count;
        }

        static void dis_count(void){
            // cout<<id;  // shows an error
            cout<<endl<<"count of the employee is : "<<count;
        }
};

// static function only access static variable 

int employee::count;
int main(){
    employee surbhit;
    surbhit.getid();
    surbhit.dis_id();
    // surbhit.dis_count();  // it can also be done as 
    employee::dis_count();
    return 0;
}