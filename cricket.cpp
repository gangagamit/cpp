#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float clacavg;
    float batavg()
    {
        return (float)runs/(innings-notout);
    }
    public:
    void readdata()
    {
        cout<<"enter bcode:";
        cin>>bcode;
        cout<<"enter name:";
        cin>>bname;
        cout<<"enter innings:";
        cin>>innings;
        cout<<"enter notout:";
        cin>>notout;
        cout<<"enter run:";
        cin>>runs;
      clacavg=batavg();
    }
    void displaydata()
    {
        cout<<"bcode:"<<bcode<<endl;
        cout<<"name:"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"run:"<<runs<<endl;
        cout<<"clacavg:"<<clacavg<<endl;
    
    }
};
int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}