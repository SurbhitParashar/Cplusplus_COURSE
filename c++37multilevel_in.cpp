#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int); // it can also be done as constructor 
        void get_roll_number(void);
};

void student :: set_roll_number(int r){
    roll_number = r;
}

void student :: get_roll_number(void){
    cout<<"the roll number of student is : "<<roll_number<<endl;
}


class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);

};

void exam :: set_marks(float a1,float b1){
    maths = a1;
    physics = b1;
}

void exam :: get_marks(void){
    cout<<"your maths marks is : "<<maths<<endl;
    cout<<"your physics marks is : "<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
        void display_percentage();
};

void result :: display_percentage(){
    get_roll_number();
    get_marks();
    cout<<"your percentage is : "<<(maths+physics)/2<<endl;
}
int main(){
    result surbhit;
    surbhit.set_roll_number(1);
    surbhit.set_marks(95,91);
    surbhit.display_percentage();
    return 0;
}

/*
    ~~NOTES******************************************************************************
    if we are inheriting b from a and c from b[a-->b-->c]
    1. a is the base class for b and b is the base class for c
    2. A-->B-->C is called inheritance path 
*/