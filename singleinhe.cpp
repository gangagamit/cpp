#include<iostream>
using namespace std;
class Base
{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class derived : public Base
{
    public:
    void getN()
    {
        cout<<"value of n is:"<<n<<endl;
    }
};
int main()
{
    derived d;
    d.setN();
    d.getN();
}