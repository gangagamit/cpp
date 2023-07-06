#include<iostream>
using namespace std;
class result
{
    private:
    int m,s,e,total;
    float per;
    public:
    void setdata()
    {
        cout<<"enter maths mark:";
        cin>>m;
        cout<<"enter science mark:";
        cin>>s;
        cout<<"enter english mark:";
        cin>>e;
    }
    void getdata()
    {
        total=m+s+e;
        per=(float)total/3;
        dis();
    }
    void dis()
    {
        cout<<"maths"<<"\tscience"<<"\tenglish"<<"\ttotal"<<"\tper"<<endl;
        cout<<m<<"\t"<<s<<"\t"<<e<<"\t"<<total<<"\t"<<per<<endl;
    }
};
int main()
{
    result r[5];
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"no:"<<i+1<<endl;
        r[i].setdata();
        r[i].getdata();
    }
}