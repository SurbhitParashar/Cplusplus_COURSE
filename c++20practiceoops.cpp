#include<iostream>
using namespace std;

class shop{
    int ItemId[100];
    int Item_price[100];
    int counter = 0;
    int no;
    public:
        void getprice(void);
        void displayprice(void);

};

void shop :: getprice(void){
    cout<<"Enter no. of items to add : ";
    cin>>no;

    for (int i = 0; i < no; i++)
    {
        cout<<endl<<"Enter ItemId of your "<<counter+1<<" item : ";
        cin>>ItemId[counter];
        cout<<"Enter Item price : ";
        cin>>Item_price[counter];
        counter ++ ;
    }
    
}

void shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Your ItemId is "<<ItemId[i]<<" and it's price is "<<Item_price[i]<<endl;
    }
    
}

int main(){
    shop dukan;
    dukan.getprice();
    dukan.displayprice();
    return 0;
}