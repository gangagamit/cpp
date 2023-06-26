#include<iostream>
using namespace std;
class stud{
    private:
    int m,s,e,t;
    float per;
    public:
    void dis()
    {
        cout<<"maths\tscience\tenglish\ttotal\tper"<<endl;
        cout<<m<<"\t"<<s<<"\t"<<e<<"\t"<<t<<"\t"<<per;
    }
    void clac()
    {
        t=m+s+e;
        per=(float)t/3;

    }
    void setdata()
    {
        cout<<"enter maths mark:";
        cin>>m;
        cout<<"enter science mark:";
        cin>>s;
        cout<<"enter englis mark:";
        cin>>e;
    }
};
int main()
{
   stud z;
   z.setdata();
   z.clac();
   z.dis(); 

}