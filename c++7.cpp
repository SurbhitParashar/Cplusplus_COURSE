#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a =8;
    // cout<<"value of a is : "<<a<<setw(5)<<9;   //setw is used to create space anyside

    // *************SELECTION CONTROL STRUCTURES******************
    // IF ELSE STATEMENTS*******

    // string pc;
    // cout<<"Enter your new passcode : "<<endl;
    // cin>>pc;

    // int siz = pc.length(); 
    // if(siz<7){
    //     cout<<"PLEASE CHANGE THE PASSWORD!!MAKE IT STRONG";
    // }
    // else if(siz==7){
    //     cout<<"PASSWORD IS MODERATE";
    // }
    // else{
    //     cout<<"NICE!!PASSWORD IS STRONG";
    // }

    // SWITCH CASE STATEMENTS***********
    int age;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;
    case 5:
        cout<<"you are 5";
        break;
    default:
        cout<<"no such special cases";
        break;
    }

    return 0;
}