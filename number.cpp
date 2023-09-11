#include<iostream>
using namespace std;

class number
{
   int x,y;
   void swap()
   {
    int z=x;
    x=y;
    y=z;
   }
   public:
   void setData()
   {
    cout<<"\nx:";
    cin>>x;
    cout<<"\ny";
    cin>>y;

    }
    int getX()
    {return x;}
     int getY()
    {return y;}
    void display()
    {
        cout<<"\nx:"<<x<<"\ny:"<<y;
    }
    void callswap()
    {
        swap();
    }
};
int main()
{
    number k;
    k.setData();
    k.display();
    k.callswap();
    k.display();
}