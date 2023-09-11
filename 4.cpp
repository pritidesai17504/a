#include<iostream>
using namespace std;
class number
{
   int no;
   public :
   void setData()
   {
     cout<<"enter number";
     cin>>no;
   }
   void display()
  { 
    cout<<"\nno:"<<no;
  }
  friend void update(number &k,int val)
  {
    k.no=k.no+val;
  }
};
int main()
{
    number t;
    t.setData();
    t.display();
    update(t,5);
    t.display();

}