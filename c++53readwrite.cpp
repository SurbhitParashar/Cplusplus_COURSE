#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"enter your name : ";
    cin>>name;
    cout<<"enter your age : ";
    cin>>age;

    ofstream out("c++52p1.txt");
    out<<"name of person is "<<name<<" and age is "<<age;
    out.close(); // is used to close the programe and tell we will not add further info in this file 

    string str;
    ifstream in("c++52p1.txt");
    getline(in,str);
    cout<<"details are as follows : "<<endl<<str;
    in.close();
    
    return 0;
}