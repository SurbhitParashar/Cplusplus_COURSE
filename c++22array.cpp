#include<iostream>
using namespace std;

class employee{
    int id;
    // int 
    public:
        void setid(void){
            cout<<"enter employee id : ";
            cin>>id;
        }

        void getid(void){
            cout<<endl<<"employee id is : "<<id<<endl;
        }
};

int main(){
    // employee surbhit, hemang, nilesh;
    employee fb[3];

    for (int i = 0; i < 3; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    return 0;
}