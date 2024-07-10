#include<iostream>
using namespace std;

// inline int pro(int a,int b){
//     //never use static with inline function 
//     // static int c=0; // this will only run once
//     // c=c+2; // using static function if we change c ki value then it will remenber it 
//     return a*b;//+c;
// }

float interest(int money ,float intrst=1.04){
    return money*intrst;
}

int main(){
    // int a,b;
    // cout<<"enter the value of a and b : "<<endl;
    // cin>>a>>b;
    // cout<<"product is : "<<pro(a,b)<<endl;

    int money;
    cout<<"enter money in your bank account : "<<endl;
    cin>>money;
    cout<<"if you have "<<money<<"rs in your bank account you will receive "<<interest
    (money,1.1)<<"rs after one year";
    return 0;
}