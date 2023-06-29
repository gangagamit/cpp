#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"defualt constructor is called.."<<endl;
    }
    test(int a)
    {
        cout<<"parameterized constructor is called...a:"<<a<<endl;
    }
    test(char a)
    {
        cout<<"parameterized constructor is called..char is:"<<a<<endl;
    }
};
int main()
{
    test t,b(10),c('A');
}