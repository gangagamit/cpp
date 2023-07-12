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
      for(i=1;i<=m;i++)
      {
        c=i*i;
        cout<<c<<endl;
      }  
    }
};
class Derived2 : public Base
{
  protected:
  int i,x;
  public:
  void setM()
  {
    
    for(i=1;i<=m;i++)
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
   b.setm();
   b.setM();
}