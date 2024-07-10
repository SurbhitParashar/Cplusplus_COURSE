// #include<iostream>
// using namespace std;

// class employee{
//     private:
//         float salary;
//         string status;
//     public:
//         int age;
//         void setdata(float a, string b);
//         void getdata(){
//             cout<<salary<<status<<age;
//         }

// };
// void employee :: setdata(float a, string b){
//     salary=a;
//     status=b;
// }

// int main(){
//     employee a;
//     a.age=40;
//     a.setdata(8674698,"single");
//     a.getdata();
//     return 0;
// }

#include<iostream>
using namespace std;

class dukan{
    int itemid[50];
    int itemprice[50];
    int no;
    int counter;
    public:
        void setdata(void);
        void getdata(void);
};

void dukan :: setdata(){
    cout<<"enter no. of items";
    cin>>no;

    for (int i = 0; i < no; i++)
    {
        cout<<"enter item id "<<counter+1<<"'s item : ";
        cin>>itemid[counter];
        cout<<"enter its price : ";
        cin>>itemprice[counter];
    }
    
}

void dukan :: getdata(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"item id's is : "<<itemid[i];
        cout<<"it's price is : "<<itemprice[i];
    }
    
}

int main(){
    dukan kirana;
    kirana.setdata();
    kirana.getdata();
    return 0;
}