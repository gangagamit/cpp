#include<iostream>
using namespace std;
template<class T>
void display(T t1)
{
    cout<<"display template:"<<t1<<endl;
}
template<class x,class y>
void Add(x a,y b)
{
    cout<<"Addition template:"<<a+b<<endl;
}
int main()
{
    display(10);
    Add(78.45,89);
}