#include<iostream>
using namespace std;
class Test
{
    public:
    static int a;
    Test()
    {
        cout<<"test calling..."<<endl;
        ++a;
    }
    static int member()
    {
        return a;
    }
};
int Test :: a=50;
int main()
{
    cout<<"starting point.."<<Test::member()<<endl;
    Test t1,t2;
    cout<<"Ending point.."<<Test ::member()<<endl;
}