#include<iostream>
using namespace std;
class student
{
private:
int admno;
char sname[10];
float eng,math,science,total;
float ctotal()
{
    return eng+math+science;
}

public:

void takedata()
{
    cout<<"enter admno:";
    cin>>admno;
    cout<<"enter sname:";
    cin>>sname;
    cout<<"enter english mark:";
    cin>>eng;
    cout<<"enter maths mark:";
    cin>>math;
    cout<<"enter science mark:";
    cin>>science;
    total=ctotal();
}

void showdata()
{
  cout<<"admno:"<<admno<<endl;
  cout<<"name:"<<sname<<endl;
  cout<<"english:"<<eng<<endl;
  cout<<"math:"<<math<<endl;
  cout<<"science:"<<science<<endl;
  cout<<"total:"<<total<<endl;
}
};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}