#include<iostream>
using namespace std;

class base_class{
    public:
        int var_base=1;
        virtual void display(){ // virtual function make it run time polymorphism 
            cout<<"the value of var_base is : "<<var_base<<endl;
        }
};
class derived_class : public base_class{
    int var_derived=2;
    void display(){
        cout<<"the value of var_base is : "<<var_base<<endl;
        cout<<"the value of var_derived is : "<<var_derived<<endl;
    }
};

int main(){
    base_class * base_class_pointer;
    base_class obj_base;
    derived_class obj_derived;
    base_class_pointer = &obj_derived;
    // virtual ka use karne se jo pointer jiske object ko indicate kr raha to uska hi function run hoga 
    // irrespective of its ki wo kiska pointer h 
    base_class_pointer->display();
    return 0;
}