#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string p1;
    ifstream in("c++52p1.txt");
    getline(in,p1);

    ofstream out("c++52p2.txt");
    out<<p1;

    return 0;
}