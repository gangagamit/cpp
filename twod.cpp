#include<iostream>
using namespace std;
class area1
{
    public:
    double are(double b,double h)
    {
        return b*h/2;
    }
    int are(int b,int h)
    {
        return b*h;
    }
    float are(float r)
    {
        return 3.14*r*r;
    }
};
int main()
{
    area1 a;
    cout<<"triangle is:"<<a.are(2.3,8.9)<<endl;
    cout<<"square is:"<<a.are(2,8)<<endl;
    cout<<"circle is:"<<a.are(8.9)<<endl;
}