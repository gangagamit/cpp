#include<iostream>
using namespace std;
class Restaurant
{
    private:
    char restname[50];
    char menu[100],item;
    int qty,price,total,dtotal,btotal,gst,tgst;
    public:
    void restN()
    {
        cout<<"-----------RR----------";
    }
    void Menu()
    {
      
        cout<<"-----------Menu----------";
        cout<<"\n----------paneer item----------"<<endl;
        cout<<"\n [1] paneer masala          200.00"<<endl;
        cout<<"\n [2] paneer bhurji          250.00"<<endl;
        cout<<"\n [3] panner kadhai          300.00"<<endl;
        cout<<"\n [4] paneer tika            260.00"<<endl;
        cout<<"\n----------Roti----------"<<endl;
        cout<<"\n [5] plain Roti             10.00"<<endl;;
        cout<<"\n [6] Butter Roti            20.00"<<endl;
        cout<<"\n [7] Tanduri Roti           25.00"<<endl;
        cout<<"\n----------Rice----------"<<endl;
        cout<<"\n [8] plain Rice             70.00"<<endl;
        cout<<"\n [9] Jira Rice              85.00"<<endl;
        cout<<"\n [10] Veg.Biryani            150.00"<<endl;
      
    }
    void ord()
    {
        cout<<"Enter menu:";
        cin>>menu;
        cout<<"Enter price:";
        cin>>price;
        cout<<"Enter qty:";
        cout<<"How many Quantity you want to buy:"<<endl;
        cin>>qty;
        total=qty*price;
      
    }
    void showdata()
    {
        cout<<"\n \t------YOUR BILL IS------"<<endl;
        cout<<"\t your item is:"<<menu<<endl;
        cout<<"\t price is:"<<price<<endl;
        cout<<"\t qty is:"<<qty<<endl;
          if(total>3000)
        {
            dtotal=total*0.01;
            btotal=total-dtotal;
            cout<<"\t btotal is:"<<btotal<<endl;
        }
        else
        {
            cout<<"\t Total Bill is:"<<total<<endl;
        }
       
        cout<<"\t------Thank you------";
    }
};
int main()
{
    Restaurant r;
    int ch;
    cout<<"1.Restaurantname"<<endl;
    cout<<"2.Menu"<<endl;
    cout<<"3.Order"<<endl;
    cout<<"0.Exit"<<endl;

    do
    {
        cout<<"\n Enter choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                r.restN();
                break;
            case 2:
                r.Menu();
                break;
            case 3:
                r.ord();
                r.showdata();
                break;
            case 0:
                break;
            default:
                cout<<"Wrong choice:"<<endl;
        }
    }while(ch!=0);
}
