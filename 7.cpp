#include<iostream>
using namespace std;
class A;
class B
{ 
    int y;
    public:

    void set()
    {
      cout<<"enter no";
      cin>>y;
    }
    void display()
    {
        cout<<"\ny"<<y;
    }
 void swap(A &);
};
class A
{
    int x;
    public:
    void set()
    {
        cout<<"enter no";
        cin>>x;
    }
    void display()
    {
        cout<<"\nx:"<<x;
    }
 friend void  B:: swap(A &);
};
void B:: swap(A &p)
{
    int tmp=y;
    y=p.x;
    p.x=tmp;
}
int main()
{
    A p;
    B q;
    p.set();
    q.set();
    p.display();
    q.display();
    q.swap(p);
     p.display();
     q.display();
}