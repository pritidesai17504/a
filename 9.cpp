//constructor function defination outside the class
#include<iostream>
using namespace std;
#define N 5

class Array
{
   int x[N];
   public:
   Array();
   Array(int);
   Array(Array &);
   ~Array(){}
   void setdata();
   void display();
   int total();
};

Array::Array()
{
    for(int i=0;i<N;i++)
    {
     x[i]=0;
    }
}
Array::Array(int val)
{
    for(int i=0;i<N;i++)
    {
      x[i]=val;
    }
}
Array ::Array(Array &t)
{
    for(int i=0;i<N;i++)
    {
      x[i]=t.x[i];
    }
}
int Array::total()
{
    int tot=x[0],i=1;
    while(i<5)
    {
        tot=tot+x[i];
        i++;
    }
}
void Array :: display()
{
    cout<<"\ndata\n";
    for(int i=0;i<N;i++)
    {
        cout<<" "<<x[i];
    }
}
void Array :: setdata()
{
    cout<<"\ndata\n";
    for(int i=0;i<N;i++)
    {
        cin>>x[i];
    }
}
int main()
{
    Array k;
    k.setdata();
    k.display();
    cout<<"\ntotal:"<<k.total();
}
//add following definatins to class array find out maximum value2.minimumm 3.check array data is in asending order return 1