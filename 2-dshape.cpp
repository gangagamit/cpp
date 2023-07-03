#include<iostream>
using namespace std;
class area
{
public:
area(double b,double h)
{
    double triangle=b*h/2;
    cout<<"area of triangle is:"<<triangle<<endl;
}
area(int b,int h)
{
    int square=b*h;
    cout<<"area of square is:"<<square<<endl;
}
area(float r)
{
    float circle=3.14*r*r;
    cout<<"area of circle is:"<<circle<<endl;
}
};
int main()
{
    area triangle(2.3,8.9),square(4,8),circle(4.8);
}