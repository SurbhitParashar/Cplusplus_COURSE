#include <iostream>
using namespace std;

int sum=89;
int main(){
    //  ***************BUILD IN DATA TYPES**************

    // int a,b,sum;
    // cout<<"enter the value of a : ";
    // cin>>a;
    // cout<<"enter the value of b : ";
    // cin>>b;
    // sum=a+b;
    // cout<<"the sum of above values is :"<<sum;
    // cout<<::sum;

    // float d=34.8f; //f/F--> uses when we have to specify that it is a float value
    // long double e=34.8l; //l/L--> double value  
    // cout<<"the size of 34.4 : "<<sizeof(34.4)<<endl; 
    // cout<<"the size of 34.4 : "<<sizeof(34.4f)<<endl; 
    // cout<<"the size of 34.4 : "<<sizeof(34.4l)<<endl; 


    // **************Reference Variables******************

    float num1=782.56;
    float &num2 = num1; // jab ham chahe ki num2 me bhi num1 wali value store ho
    cout<<num1<<endl<<num2; 

    // ***************TypeCasting**********************

    // float a=45.85;
    // int b=85;
    // cout<<"the value of a is : "<<int(a);//<<"size is : "<<sizeof(int(a))<<endl;
    // cout<<"converted value of b in float is : "<<float(b);


    return 0;
}