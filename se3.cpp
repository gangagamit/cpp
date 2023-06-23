#include<iostream>
using namespace std;
int main()
{
    int i,n,k=1;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<k<<" ";
        k*=2;
    }
}