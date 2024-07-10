// constructor ne jo dynamic memory allocated ho rakhi h jab wo delete ho to space khali karata h 
// destructor
// 1. destructor never takes an argument nor does it return any value

#include<iostream>
using namespace std;

int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"constructor called "<<count<<endl;
    }
    //destructor syntax

    ~num(){
        cout<<"destructor called "<<count<<endl; 
        count--;
    }
};

int main(){
    cout<<"entering the main funtion"<<endl;
    cout<<"first object n1"<<endl;
    num n1;
    
    // this block means when this block ends all the things inside this will destruct
    {
        cout<<"entering the block"<<endl;
        cout<<"two more objects"<<endl;
        num n2,n3;
        cout<<"exiting the block"<<endl;
        //n2,n3 will destruct here
    }
    cout<<"back to main"<<endl;
   
    // when compiler thinks there is no need of constructor and we have made destructor it will
    // automatically destroy constructor
    return 0;
}