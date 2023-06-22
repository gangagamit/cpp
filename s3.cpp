#include<iostream>
using namespace std;
int main()
{
    int i,n,k=1;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i=i*2)
    {
        cout<<k*i<<" ";
        k++;
    }
}


