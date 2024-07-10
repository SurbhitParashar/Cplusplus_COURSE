#include<iostream>
using namespace std;
int main(){
    // for (int i = 0; i < 50; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==25){
    //         cout<<"You have terminated from program";
    //         break; 
    //     }
    // }
    
    for (int i=0; i<50; i++)
    {
        
        if(i==2){
            continue;
            }
        cout<<i<<endl; 
    }
    return 0;
}