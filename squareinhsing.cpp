#include<iostream>
using namespace std;
class Base
{
    protected:
    int n;
    public:
    void setdata()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class derived : public Base
{
    public:
    int i,c;
    void getdata()
    {
        for(i=1;i<n;i++)
        {
            c=i*i;
            cout<<c<<endl;
        }
    }
};
int main()
{
    derived d;
    d.setdata();
    d.getdata();
}