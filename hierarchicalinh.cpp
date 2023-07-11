#include<iostream>
using namespace std;
class Base
{
    protected:
    int m;
    public:
    void setM()
    {
        cout<<"Enter m:";
        cin>>m;
    }
};
class Derived1 : public Base
{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"Enter n:";
        cin>>n;
    }
    void addtion()
    {
        cout<<"Addition of m and n is:"<<m+n<<endl;
    }
};
class Derived2 : public Base
{
    int n;
    public:
    void setN()
    {
        cout<<"Enter n:";
        cin>>n;
    }
    void product()
    {
        cout<<"product of m and n is:"<<m*n<<endl;
    }
};
int main()
{
    Derived1 d;
    d.setM();
    d.setN();
    d.addtion();

    Derived2 b;
    b.setM();
    b.setN();
    b.product();
}