#include <iostream>
using namespace std;

// base class
class employee
{
public:
    int id;
    float salary;
    employee(int ids)
    {
        id = ids;
        salary = 78.0;
    }
    employee() {}
};

// derived class synatx
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

// creating a programmer derived class from employee base class
/*
~NOTES~
1. If we inherite (visibility mode)::public:: then public member of base class is also public in derived class
2. If we inherite (visibility mode)::private:: then ppublic member of base class is private members in derived class
3. Default visibility mode is private
4. Private members are never inherite
*/
class programmer : employee
{
public:
    programmer(int ids)
    {
        id = ids;
    }
    int codelanguage = 9;
    void getdata()
    {
        cout << "your id is : " << id;
    }
};

int main()
{
    employee rohan(1);
    cout << rohan.salary << endl;
    programmer skill(1);
    // cout<<skill.id; // cant use this we have to use function then call because we have private inherit
    cout << skill.codelanguage << endl;
    skill.getdata();
    return 0;
}