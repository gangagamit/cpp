#include<iostream>
using namespace std;
class result
{
    int m,s,e,t;
    float per;
    public:
    void setdata();
    int getdata()
    {
        cout<<"maths:"<<m<<endl;
        cout<<"science:"<<s<<endl;
        cout<<"english:"<<e<<endl;
        cout<<"total:"<<t<<endl;
        cout<<"perc:"<<per<<endl;
    }
    
};