#include<iostream>
#include<fstream>
using namespace std;

/*
the useful classes to work with files in c++ :
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

in order to work with files in c++ you have to open it, so there are two ways to open it:
1. using the constructor
2. using the member function open() of the class
*/

int main(){
    //opening the file using constructor and writing to it
    // string st = "HARE KRISHNA";
    // ofstream out("c++52.txt"); // ofstream is a class of "fstream" which allow to write in file
    // we can give other name than out in above line 
    // out<<st;

    // opening the file using constructor and reading to it
    string st2;
    ifstream in("c++52.txt"); // read operation 
    // in>>st2; // this will only give first sentence of whole line
    getline(in,st2);  
    cout<<st2;

    
    return 0;
}