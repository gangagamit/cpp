#include<iostream>
using namespace std;
class Bank
{
    string name;
    int bal;
    public:
    void setdata(string name,int bal)
    {
        this->name= name;
        this->bal=bal;
    }
    void get()
    {
        cout<<"name:"<<name<<endl;
        cout<<"balance:"<<bal<<endl;
    }
};
int main()
{
    Bank k;
    k.setdata("hello",1234);
    k.get();
}