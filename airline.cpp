 #include<iostream>
 using namespace std;
 class flight
 {
    private:
    int flightno;
    char destination[50];
    float distance;
    float quantity;
    float calfuel()
    {
        if(distance<=1000)
            return 500;
        else if(distance<=2000)
            return 1100;
        else
            2200;
    }
    public:
    void feedinfo()
    {
        cout<<"flightno:";
        cin>>flightno;
        cout<<"destination:";
        cin>>destination;
        cout<<"distance:";
        cin>>distance;
        quantity=calfuel();
    }
    void showinfo()
    {
        cout<<"flightno:"<<flightno<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distance:"<<distance<<endl;
        cout<<"quantity:"<<quantity<<endl;   
    }
 }; 
 int main()
 {
    flight f;
    f.feedinfo();
    f.showinfo();
 }                                                                                                    