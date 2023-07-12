#include<iostream>
using namespace std;
class Base
{
    protected:
    int m;
    public:
    void setm()
    {
        cout<<"Enter m:";
        cin>>m;
    }
};
class Derived1: public Base
{
    protected:
    int i,c;
    public:
    void setn()
    {
      for(i=1;i<=10;i++)
      {
        c=i*i;
        cout<<c<<endl;
      }  
    }
};
class Derived2 : public Base
{
  protected:
  int i,n,x;
  public:
  void setM()
  {
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
      x=i*i*i;
      cout<<x<<endl;
    }
  }
};
int main()
{
  Derived1 d;
  d.setm();
  d.setn();

   Derived2 b;
   b.setM();
}