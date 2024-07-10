#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_roll_no(int a){
            roll_no=a;
        }
        void get_roll_no(){
            cout<<"student roll number is : "<<roll_no<<endl;
        }
};

class test : virtual public student{
    protected:
        float maths, physics;
    public:
        void set_number(int a, int b){
            maths=a;
            physics=b;
        }
        void get_number(){
            cout<<"marks in maths is : "<<maths<<endl;
            cout<<"marks in physics is : "<<physics<<endl;
        }
};

class sports : virtual public student{
    protected:
        float s_score;
    public:
        void set_s_score(int a){
            s_score=a;
        }
        void get_s_score(){
            cout<<"student score in sports is : "<<s_score<<endl;
        }
};

class result : public test, public sports{
    public:
        void total_result(){
            get_roll_no();
            get_number();
            get_s_score();
            cout<<"final score out of 300 is : "<<maths+physics+s_score<<endl;
            cout<<"percentage of student is : "<<(((maths+physics+s_score)/300)*100)<<endl;
        }
};

int main(){
    result surbhit;
    surbhit.set_roll_no(1);
    surbhit.set_number(95,91);
    surbhit.set_s_score(100);
    surbhit.total_result();
    return 0;
}