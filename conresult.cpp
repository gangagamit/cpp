#include<iostream>
using namespace std;
class result
{
    private:
    int rollno;
    char name[30];
    int maths,science,english,total;
    float per;
    public:
    result()
    {
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter maths mark:";
        cin>>maths;
        cout<<"enter science mark:";
        cin>>science;
        cout<<"enter english mark:";
        cin>>english;        
    }
    void getdata()
    {
        total=maths+science+english;
        per=(float)total/3;
    }
    void getdisplay()
    {
        cout<<"rollno"<<"\tname"<<"\tmaths"<<"\tscience"<<"\tenglish"<<"\ttotal"<<"\tper"<<endl;
        cout<<rollno<<"\t"<<name<<"\t"<<maths<<"\t"<<science<<"\t"<<english<<"\t"<<total<<"\t"<<per;
    }
};
int main()
{
    result r;
    r.getdata();
    r.getdisplay();
}