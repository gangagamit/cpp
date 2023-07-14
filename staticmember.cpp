#include<iostream>
using namespace std;
class Test
{
    public:
    static int a;
    Test()
    {
        cout<<"test calling.."<<endl;
        ++a;
    }
};
int Test :: a=50;
int main()
{
    cout<<"starting point:"<<Test :: a<<endl;
    Test t1,t2;
    cout<<"ending point:"<<Test :: a <<endl;
}