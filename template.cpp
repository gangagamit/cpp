#include<iostream>
using namespace std;
template<class T>
void display(T t1)
{
    cout<<"display template:"<<t1<<endl;
}
int main()
{
    display(10);
}