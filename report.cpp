#include<iostream>
using namespace std;
class REPORT
{
    private:
    int i;
    int adno;
    char name[20];
    float mark[5];
    float av,total,per;
    float GETAVG()
    {
        for(i=0;i<5;i++)
        {
            total=mark[0]+mark[1]+mark[2]+mark[3]+mark[4];
            av=total/5;
            per=(float)total*100/500;
            return av;
            return total;
    
        }
    }
    public:
    void READINFO()
    {
        cout<<"enter adno:";
        cin>>adno;
        cout<<"enter name:";
        cin>>name;
        for(i=0;i<5;i++)
        {
            cout<<"enter mark:";
            cin>>mark[i];
        }
        av=GETAVG();
    }
    void DISPLAY()
    {
        cout<<"admin no:"<<adno<<endl;
        cout<<"name:"<<name<<endl;
        for(i=0;i<5;i++)
        {
            cout<<"mark:"<<mark[i]<<endl;
        }
        cout<<"total:"<<total<<endl;
        cout<<"avrg:"<<av<<endl;
        cout<<"perc:"<<per<<endl;
    }
};
int main()
{
    REPORT r;
    r.READINFO();
    r.DISPLAY();
}