#include<iostream>
#include<math.h>
using namespace std;

class simple_calculator{
    
    public:
        /*use when we give values directly
        // void set_num(int a1,int b1){
        //     a=a1;
        //     b=b1;
        // } 
    
        // void set_operator(string op){
        //     oprtr1=op;
        // }
        */

        void result(){
            string oprtr1;
            int a,b;

            cout<<"enter value of num1 : "<<endl;
            cin>>a;
            cout<<"enter value of num2 : "<<endl;
            cin>>b;
            cout<<"enter operator from +,-,*,/ : "<<endl;
            cin>>oprtr1;

            if (oprtr1=="+"){
                cout<<"sum of above numbers is : "<<a+b<<endl;
            }
            else if (oprtr1=="-")
            {
                cout<<"subtraction of above numbers is : "<<a-b<<endl;
            }
            else if (oprtr1=="/")
            {
                cout<<"divide of above numbers is : "<<a/b<<endl;
            }
            else if (oprtr1=="*")
            {
                cout<<"multiple of above numbers is : "<<a*b<<endl;
            }}
    
};

class scientific_calc{
    
    public:

        /* use when we assign values to them
        // void set_trigo_num(int a){
        //     trigo_num = a;
        // }

        void set_operator(string op){
            oprtr2=op;
        }
        */

        void result(){
            string oprtr2;
            cout<<"enter operator for scientific calculation from sin,cos,tan,^ : "<<endl;
            cin>>oprtr2;
        
            if ((oprtr2=="sin")||(oprtr2=="cos")||(oprtr2=="tan")){
                int trigo_num;
                cout<<"enter value for trignometry : "<<endl;
                cin>>trigo_num;

                if(oprtr2=="sin"){
                    cout<<sin(trigo_num);
                }
                else if(oprtr2=="cos"){
                    cout<<cos(trigo_num);
                }
                else if(oprtr2=="tan"){
                    cout<<tan(trigo_num);
                }
            }
            else if(oprtr2=="^"){
                int num1,num2;
                cout<<"enter the value of num1 : "<<endl;
                cin>>num1;
                cout<<"enter the value of num2 : "<<endl;
                cin>>num2;
                cout<<"the value is : "<<pow(num1,num2);
            }

        }
};

class final_calc : public simple_calculator, public scientific_calc{
    public:
        void calculation(){
        int calc_num;
        cout<<"enter 1 for simple calculator and 2 for scientific calculator : "<<endl;
        cin>>calc_num;

        if (calc_num==1){
            simple_calculator calc1;
            calc1.result();

        }
        else if(calc_num==2){
            scientific_calc calc2;
            calc2.result();
        }
        }

};

int main(){
    // simple_calculator calc;
    // calc.set_num(4,5);
    // calc.set_operator("+");
    // calc.result();

    // scientific_calc calc;
    // calc.set_trigo_num(4);
    // calc.set_operator("^");
    // calc.result();

    final_calc calculator;
    calculator.calculation();


    return 0;
}