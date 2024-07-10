#include<iostream>
using namespace std;

int main(){
    // pointer example
    string name = "surbhit";
    string* address = &name;
    cout<<"The String at Address : "<<*(address)<<endl;

    // new keyword
    int* a = new int(5);
    cout<<"the value at address a is : "<<*(a)<<endl;

    int* arry = new int[2];
    arry[0]=8;
    // arry[1]=65;
    *(arry+1)=65;
    // delete arry; // delete keyword
    cout<<"the value at arry[0] is : "<<arry[0]<<endl;
    cout<<"the value at arry[1] is : "<<arry[1]<<endl;

    return 0;
}