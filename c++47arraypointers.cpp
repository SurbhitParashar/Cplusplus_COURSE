#include<iostream>
using namespace std;

class kirana{
    int id;
    float price;
    public:
    void setdata(int a, float b){
        id=a;
        price=b;
    }
    void getdata(void){
        cout<<"the id of item is : "<<id<<endl;
        cout<<"the price of item is : "<<price<<endl;
    }
};

int main(){
    int size=2;
    kirana *ptr = new kirana[size];
    // kirana *ptrtemp = ptr; //instead of this we can use --ptr because using ptr++ it will cross last item 
    int p;                    // so to come back we can use --p
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the value of id and price : "<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        --ptr;
        ptr->getdata();
    }
    
    
    return 0;
}