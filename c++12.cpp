#include<iostream>
using namespace std;

typedef struct employee
{
    int ID;
    float salary;
    char favchar;
}emp;

union money
{
    int rice_kg;
    char car;
};

int main(){
    //*******STRUCTURES*************
    // struct employee surbhit;

    // emp surbhit;  // this can be written in place of the above line if typedef is used 
    // surbhit.ID = 1;
    // surbhit.salary = 209090909;
    // surbhit.favchar = 'a';

    // cout<<"the salary of employee surbhit is : "<<surbhit.salary;

    // **UNIONS**********
    // union money s1;
    // s1.rice_kg = 12;
    // s1.car = 'a';
    // cout<<s1.rice_kg; // if now in money value of rice has been changed to car so ricekg give garbage value  
    // cout<<s1.car;
    
    enum name {ganesh, surbhit,parashar};
    name m1 = surbhit;
    cout<<m1;
    // cout<<ganesh;
    // cout<<surbhit;
    // cout<<parashar;
    return 0;
}