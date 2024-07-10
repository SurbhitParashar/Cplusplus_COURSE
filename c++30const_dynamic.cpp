#include<iostream>
using namespace std;

class bankdeposit{
    int principal , years;
    float interestrate , returnvalue;

    public:
    // bankdeposit(){}  // used for in main function for bankdeposit bd1 etc...
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show(void);
    

};

// if there is interest rate like 0.04 then we will use this 
bankdeposit :: bankdeposit(int p,int y,float r){
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1+r);
    }
    // cout<<returnvalue;
}

// if interest rate is like 4% use this
bankdeposit :: bankdeposit(int p,int y,int r){
    principal = p;
    years = y;
    interestrate = float(r)/100;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1+interestrate);
    }
    // cout<<returnvalue;
}

void bankdeposit :: show(void){
    cout<<"principal amount is "<<principal<<endl
        <<" return value after "<<years
        <<" years are "<<returnvalue<<endl;
}
int main(){

    // bankdeposit bd1,bd2; // agar ham ese inisialize karenge to upar class me ek khali 
                           // counstructor dalna hoga 
    int p,y;
    float r;
    int R;

    cout<<"enter the value of p y and r(float) : ";
    cin>>p>>y>>r;
    bankdeposit bd1 = bankdeposit(p,y,r);
    bd1.show();

    cout<<"enter the value of p y and r(int) : ";
    cin>>p>>y>>R;
    bankdeposit bd2 = bankdeposit(p,y,R);
    bd2.show();


    return 0; 
}