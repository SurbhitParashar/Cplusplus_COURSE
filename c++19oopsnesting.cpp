#include<iostream>
#include<string>
using namespace std;

class binary{
    string b;

public:
    void bin(void);
    void chk_bin(void);
    void chng_bin(void);
    void display(void);
};

void binary :: bin(void){
    cout<<endl<<"enter a binary number : ";
    cin>>b;
}

void binary :: chk_bin(void){
    for (int i = 0; i < b.length(); i++)
    {
        if(b.at(i)!='0' && b.at(i)!='1')
        {
            cout<<"it is not a binary format ";
            exit(0); // help us to exit whole class and not run other functions
        }
        
        else{
            cout<<"it is a binary number "<<endl;
            break;
        }
    }
    
}

void binary :: chng_bin(void){
    for (int i = 0; i < b.length(); i++)
    {
        if(b.at(i)=='0'){
            b.at(i)='1';
        }
        else {
            b.at(i)='0'; 
        }
    }
    // cout<<b; 
} 

// easy method of function this is in line 47
void binary :: display(void){
    cout<<endl<<"Your changed number is : ";
    for (int i = 0; i < b.length(); i++)
    {
       cout<<b.at(i); 
    }
    
}
 
int main(){ 
    binary a;
    a.bin();
    a.chk_bin();
    a.chng_bin();
    a.display();
    return 0;
}