#include<iostream>
using namespace std;

// funciton prototype is used WHEN WE MAKE OUR ADDITIONAL FUNCTION AFTER MAIN FUNCTION AND WANT TO RUN OUR
// PROGRAME SUCCESFULLY

int sum(int num1,int num2); //this will give assurnace to programe that there exist sum function afterwards
// int sum(int a , b) --> not acceptable
// int sum(int,int) --> acceptable

int main(){
    
    for (int i = 34; i < 40;) //not upgrading the value of i
    {
        int num1,num2;
        cout<<"enter the first value : "<<endl;
        cin>>num1;
        cout<<"enter the second value : "<<endl;
        cin>>num2; 
        cout<<"the sum of the above numbers is : "<<sum(num1,num2)<<endl;

        if ((sum(num1,num2))>20)
        {
            cout<<"your programme has been terminated because you have exceeded the upper limit";
            break;
        }
    }
    return 0;
}

int sum(int num1,int num2){
    int c = num1+num2;
    return c;
}