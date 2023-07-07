#include<iostream>
using namespace std;
class Bank
{
    private:
   
    int tbalance=6000,damt,wamt;
   
    public:
   
    void deposite()
    {
        cout<<"enter deposite:"<<endl;
        cin>>damt;
        tbalance+=damt;
        cout<<"your deposite amount is:"<<damt;
    }
    void withdraw()
    {
        cout<<"enter withdraw:"<<endl;;
        cin>>wamt;
        if(tbalance<wamt)
        {
            cout<<"sorry not withdraw amount"<<endl;
        }
        else
        {
              tbalance-=wamt;
              cout<<"your withdraw amount is:"<<wamt<<endl;
        }
   
    }
    void showbalnce()
    {
        cout<<"balance:"<<tbalance<<endl;
    }
   
    
};
int main()
{
    Bank k;
    int ch;
    cout<<"1.Deposite amount"<<endl;
    cout<<"2.Withdraw amount"<<endl;
    cout<<"3.Show  amount"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<endl;
    do{
        cout<<"enter choice:";
        cin>>ch;
        switch (ch)
        {
        case 1:
               k.deposite();
            break;
        case 2:
           k.withdraw();
           break; 
        case 3:
               k.showbalnce();
               break; 
        case 0:
            break;  
        
        default:
            cout<<"Wrong choice"<<endl;
            break;
        }
    }while(ch!=0);
}
    
  
