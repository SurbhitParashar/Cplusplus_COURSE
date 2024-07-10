// if we use pointer to derived class of base class this will onlu run derived chize from base class
#include<iostream>
using namespace std;

class base_class{
    public:
        int var_base;
        void display(){
            cout<<"the value of var_base : "<<var_base<<endl;
        }
};
class derived_class : public base_class{
    public:
        int var_derived;
        void display(){
            cout<<"the value of var_derived : "<<var_derived<<endl;
            cout<<"the value of var_base : "<<var_base<<endl;
        }
};

int main(){
    base_class * base_class_pointer;
    base_class obj_base;
    derived_class obj_derived;
    base_class_pointer = &obj_derived; // in this base_class_pointer can be used to point derived class
    // object but cannot used to point functions of derived class it can only used to indicate base class

    base_class_pointer->var_base=79;
    // base_class_pointer->var_derived=78; // cannot do this bcoz of above reason
    base_class_pointer->display();

    derived_class * derived_class_pointer;
    derived_class_pointer->var_derived=78;
    derived_class_pointer->var_base=789; // bcoz var_base is derived in the derived class this is why 
    derived_class_pointer->display();   // it can be done by this also
    return 0;
}