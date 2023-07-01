#include<iostream>
using namespace std;
class solid
{
    public:
    solid(int a)
    {
        int cube=a*a;
        cout<<"volume of cube:"<<cube<<endl;
    }
    solid(double radius,double height)
    {
        double cylinder=3.14*radius*radius*height;
        cout<<"volume of cylinder:"<<cylinder<<endl;
    }
    solid(int length,int breadth,int height)
    {
     int cuboid=length*breadth*height;   
    cout<<"volume of cuboid:"<<cuboid<<endl;
    }
};
int main()
{
    solid cube(3),cylinder(2.3,5.3),cuboid(2,6,7);
}