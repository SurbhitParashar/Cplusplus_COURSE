#include<iostream>
using namespace std;
int main(){
    // ARRAYS ALLOCATION**********
    int marks[]={15,18,16,19};
    // cout<<marks[2]<<endl;
    
    // editing in array
    // marks[2]=18;
    // cout<<marks[2];

    // int phymarks[4];
    // phymarks[0]=19;
    // phymarks[1]=18;
    // phymarks[2]=11;
    // phymarks[3]=17; 
    // cout<<phymarks[2];

    //** PRINTING ABOVE RESULTS USING FOR LOOP
    // for (int i = 0; i < 4 ; i++)
    // {
    //     cout<<"The marks of "<<i+1<<"th student is : "<<phymarks[i]<<endl;

    // }

    //** USING WHILE LOOP
    // int i=0;
    // while(i<4){
    //     cout<<"The marks of "<<i+1<<"th student is : "<<phymarks[i]<<endl;
    //     i++;
    // }

    // POINTERS IN ARRAYS 
    int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*p<<endl;
    // cout<<*(++p)<<endl;
    
    // cout<<"the valur at marks[0] : "<<*p<<endl;
    // cout<<"the valur at marks[1] : "<<*(p+1)<<endl;
    // cout<<"the valur at marks[2] : "<<*(p+2)<<endl;
    // cout<<"the valur at marks[3] : "<<*(p+3)<<endl;
    return 0;
}