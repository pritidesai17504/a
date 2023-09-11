#include<iostream>
using namespace std;

class myTime
{
   int h,m,s;

   public:
   myTime(){h=m=s=0;}
   myTime(int a,int b=0,int c=0)
   {
    h=a;m=b;s=c;
   }
   myTime(long int z)
   {
        h=z/3600;
        z=z%3600;
        m=z/60;
        s=z%60;
   }
   myTime(myTime &k)
   {
    h=k.h;
    m=k.m;
    s=k.s;
   }
   ~myTime(){}
   void setTime(int a,int b=0,int c=0)
   {
      h=a;
      m=b;
      s=c;
   }
   int getHr(){return h;}
   int getMn(){return m;}
   int getSs(){return s;}
  
      void setTime() 
      {
        cout<<"\nh:";
        cin>>h;
        cout<<"\nm:";
        cin>>m;
        cout<<"\ns:";
        cin>>s;
      }
      void setTime(long int z)
      {
         h=z/3600;
        z=z%3600;
        m=z/60;
        s=z%60;
      }
      long int toseconds()
      {
          return h*3600l+m*60+s;
      }
      int isMore(myTime &k)
      {
        return toseconds()>k.toseconds();
      }
      int isLess(myTime &k)
      {
        return toseconds()<k.toseconds();
      }
    
    myTime add(myTime &t)
    {
        long int a=toseconds();
        long int b=t.toseconds();
        long int c=a+b;
        myTime k;
        k.setTime(c);
        return k;
    }
    myTime sub(myTime &t)
    {
        long int a=toseconds();
        long int b=t.toseconds();
        long int c=labs(a-b);
        myTime k;
        k.setTime(c);
        return k;
    }
  void display()
  {
    cout<<"\nH:"<<h<<"M:"<<m<<"\nS:"<<s;
  }
};



