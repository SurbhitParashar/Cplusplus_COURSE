#include<iostream>
using namespace std;

class testing{
    int a,b;
    public:
        // testing(int i,int j) : a(i), b(j)  // ek ye tarika bhi h inisialization ka constructor me
        // testing(int i,int j) : a(i), b(i+j) 
        // testing(int i,int j) : a(i), b(a+j) 
        // testing(int i,int j) : b(j), a(i+b)  // isme error ayega because in line 5 a phele declear hua h  
        {
            cout<<"inisialization succed!"<<endl;
        }  
        void print_num(){
            cout<<a<<endl<<b;
        }
};

int main(){
    testing t(4,9);
    t.print_num();
    return 0;
}