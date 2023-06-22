#include<iostream>
using namespace std;
int main()
{
    int i,n,total=0;
    cout<<"enter n:";
    cin>>n;
    for(i=0;i<=10;i++)
    {
        i=i+1;
        cout<<i<<" ";
        total+=i;
    }
    cout<<"\n total is:"<<total;

}