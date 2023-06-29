#include<iostream>
using namespace std;
class book
{
    private:
    int bookno;
    char booktitle[30];
    float price,tcost;
    void total_cost(int n)
    {
        tcost=price*n;
        cout<<tcost;
    }
    public:
    void input()
    {
        cout<<"enter bookno:";
        cin>>bookno;
         cout<<"enter booktitle:";
        cin>>booktitle;
         cout<<"enter price:";
        cin>>price;   
    }
    void purchase()
    {
        int n;
        cout<<"enter copies:";
        cin>>n;
        cout<<"total cost is:";
        total_cost(n);
    }
};
int main()
{
    book b;
    b.input();
    b.purchase();
}