#include<iostream>
using namespace std;
class B;
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
    friend void swap(A &,B &);
};
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
    friend void swap(A &,B&);
};
void swap(A &p,B &q)
{
    int tmp=q.y;
    q.y=p.x;
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
    swap(p,q);
     p.display();
     q.display();
}