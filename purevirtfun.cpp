#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void dis()=0;

};
class derived : public Base
{
    public:
    void dis()
    {
        cout<<"derived class called.."<<endl;
    }
};
int main()
{
    Base *p;
    derived d;
    p=&d;
    p->dis();
}