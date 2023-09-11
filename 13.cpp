#include<iostream>
#include"myarray.h"
using namespace std;
class result
{
    int rno;
    Array mrk;
    public:
    result(){rno=0;}
    ~result(){}
    void setData()
    {
        cout<<"\nroll no:";
        cin>>rno;
        mrk.setData();
    }
    void display()
    {
        cout<<"\nroll no:"<<rno;
         mrk.display();
         cout<<"\ntotal:"<<mrk.total();
         cout<<"\naverage:"<<mrk.avg();
    }
    int getNo(){return rno;} //1=roll numberwise
    int getTotal(){return mrk.total();}//2=total wise
    int getAvg(){return mrk.avg();} //3=average wise
    int compare(result &t,int flg)
    {
        int res=0;
        switch(flg)
        {
            case 1:
            res=rno-t.rno; 
            break;
            case 2:
             res=getTotal()-t.getTotal();
             break;
            case 3:
            res=getAvg()-t.getAvg();
            break;
        }
        return res;
    }
    int isMore(result &t,int flg)
    {
        int res=0;
        switch(flg)
        {
            case 1:
            res=rno>t.rno; 
            break;
            case 2:
             res=getTotal()>t.getTotal();
             break;
            case 3:
            res=getAvg()>t.getAvg();
            break;
        }
        return res;
    }
    int isLess(result &t,int flg)
    {
        int res=0;
        switch(flg)
        {
            case 1:
            res=rno<t.rno; 
            break;
            case 2:
             res=getTotal()<t.getTotal();
             break;
            case 3:
            res=getAvg()<t.getAvg();
            break;
        }
        return res;
    }
};

int main()
{
    result a[5],tmp;
    int i=0,j=0,pos=0;
    for(i=0;i<5;i++)
    a[i].setData();
    cout<<"\nbefore sorting";
    for(i=0;i<5;i++)
    {
        a[i].display();
    }
  for(i=0;i<4;i++)
  { 
    pos=i;
    for(j=i+1;j<5;j++)
    {
       if(a[j].isLess(a[pos],1))
       pos=j;
    }
    if(i!=pos)
    {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
    }
  }
    cout<<"\nafter sorting";
    for(i=0;i<5;i++)
    a[i].display();
}