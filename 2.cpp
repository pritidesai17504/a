#include<iostream>
using namespace std;
//1.fuction polymorphism and overloading
//2.class object as argument to the function
//3.functions returning class objects
//4.use of |this| pointer
class num
{
    int a,b;
    public:
    void setData()
    {
        cout<<"\nvalue for a";
        cin>>a;
        cout<<"\nvalue for b";
        cin>>b;
    }
    void setData(int a,int b)
   {
     this->a=a;
     this->b=b;
   }
   //c++ uses a unique keyword called this' to represent an object that invokes a member function.this is a pointer that points to the
   // object for whichthis function was called the starting address is same as the address of the first variable in class structure this
   // uniqe pointer is automatically passed to a member function when it is called
   //the pointer this acts as an inplicit argument to all the member functions.
   void setData(int x)
   {
      a=b=x;
   }
   void setData(num &t)
   {
     a=t.a;
     b=t.b;
   }
   void display()
   {
     cout<<"\nA:"<<a;
     cout<<"\nB:"<<b;
   }
   int getA()
   {
    return a;
   }
   int getB()
   {
    return b;
   }
   void swap()
   {
    int c=a;
     a=b;
     b=c;
   }
//    num add(num &k)
//    {
//       num t;
//       t.setData(a+k.a,b+k.b);
//       return t;
//    }
 num add(num &k)
   {
      num t;
      int x=a+k.a;
      int y=b+k.b;
      t.setData(x,y);
      return t;
   }
   num sub(num &k)
   {
      num t;
      int x=a-k.a;
      int y=b-k.b;
      t.setData(x,y);
      return t;
   }

};
int main()
{
    num p,q,r;
    p.setData();
    int x=p.getA()+3;
    int y=p.getB()+4;
    q.setData(y,x);
    p.display();
    q.display();
    q.swap();
    q.display();
    r=p.add(q);
    r.display();
    r=p.sub(q);
    r.display();

}
//