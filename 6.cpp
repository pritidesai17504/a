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
 void swap(B &);
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
    friend void A:: swap(B &);
};
void A:: swap(B &q)
{
    int tmp=q.y;
    q.y=x;
    x=tmp;
}
int main()
{
    A p;
    B q;
    p.set();
    q.set();
    p.display();
    q.display();
    p.swap(q);
     p.display();
     q.display();
}