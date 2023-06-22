#include<iostream>
using namespace std;
int main()
{
    int i,n,square=1;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        square=i*i;
        cout<<square<<" ";
    }

}