#include<iostream>
using namespace std;
int main()
{
    int i,n,k,a=0,b=1;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k=a+b;
        a=b;
        b=k;
        cout<<a<<" ";
    }
}