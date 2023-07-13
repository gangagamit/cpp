#include<iostream>
using namespace std;
class test
{
    public:
    virtual void set()
    {
        cout<<"called virtual class.."<<endl;
    }
};
class derived : public test
{
    public:
    void set()
    {
        cout<<"called derived class.."<<endl;
    }
};
int main()
{
    test *p,b;
    derived d;
    p=&b;
    p->set();
    p=&d;
    p->set();
}