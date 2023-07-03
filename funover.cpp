#include<iostream>
using namespace std;
class solid1
{
    public:
    int sld(int a)
    {
     return a*a;
    }
   double sld(double radius,double height)
    {
       return 3.14*radius*radius*height;
    }
    int sld(int length,int breadth,int height)
    {
        return length*breadth*height;                                                                                                                                                                                                                    
    }

};
int main()                                                                                                                                           
{
    solid1 fun;
    cout<<"cube is:"<<fun.sld(3)<<endl;
    cout<<"cylinder is:"<<fun.sld(2.3,8.9)<<endl;
    cout<<"cuboid is:"<<fun.sld(9,5,7);
}