#include<iostream>
using namespace std;

class num
{
    int x,y;
    public :
    num()
    {
        x=y=0;
        cout<<"\ndefault";
    }
    num(int a)
    {
        x=y=a;
        cout<<"\npara 1";
    }
    num(int a,int b)
    {
       x=a;
       y=b;
       cout<<"\npara 2";
    }
    num(num &t)
    {
        x=t.x;
        y=t.y;
        cout<<"\ncopy";
    }
    ~num()
    {
        cout<<"\ndestructor";
    }
    void setData()
    {
        cout<<"\nx:";
        cin>>x;
        cout<<"\ny";
        cin>>y;
    }
    void setData(int a)
      {
      x=y=a;
      }   
     void setData(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void setdata(num &t)
    {
        x=t.x;
        y=t.y;
    }
    void display()
    {
        cout<<"\nx:"<<x<<"\ny:"<<y;
    }
    int getX()
    {
        return x;
    }
     int getY()
     {
        return y;
     }
     num add(num &t)
     {
        num k(x+t.x,y+t.y);
        return k;
     }
      num sub(num &t)
     {
        num a(x-t.x,y-t.y);
        return a;
     }
};
int main()
{
   num p;
   p.display();
   num q(10);
   q.display();
   {
     num z(3,4);
     z.display();
   }
   p.setData();
   q.setData();
   p.display();
   q.display();
   num r;
   r=p.add(q);
   r.display();
}