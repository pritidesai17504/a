#include<iostream>
#include<cstring>
using namespace std;
class book
{
    int bno;
    char bnm[20];
    int bprice;
    public:
    void setData(int a,char *b,int c)
    {
       bno=a;
       strcpy(bnm,b);
       bprice=c;
    }
    void setData(int a,char *b)
    {
       bno=a;
       strcpy(bnm,b);
       cout<<"book price";
       cin>>bprice;
    }
    void setData(int a)
    {
       bno=a;
       cout<<"name";
       cin>>bnm;
       cout<<"book price";
       cin>>bprice;
    }
     void setData()
    {
       cout<<"\nbook no";
       cin>>bno;
       cout<<"\nname";
       cin>>bnm;
       cout<<"book price";
       cin>>bprice;
    }
    int getno()
    {
        return bno;
    }
     int getprice()
    {
        return bprice;
    }
     char *getname()
    {
        return bnm;
    }
    void display()
    {
       cout<<"\nbook data\nno:"<<bno<<"\nname"<<bnm<<"\nprice"<<bprice;
    }
};