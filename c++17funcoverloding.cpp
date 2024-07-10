#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    // function overloding is when we specify same name to two function and c++ on its own 
    // specify which is used for what

    cout<<"the sum of 2 and 6 is : "<<sum(2,6)<<endl;
    cout<<"the sum of 2 , 5 and 6 is : "<<sum(2,5,6)<<endl;

    return 0;
}