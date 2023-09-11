#include<iostream>
using namespace std;

//create an header file name myarray.hof class array
class Array
{
    int x[5];
    public:
    Array();
    Array(int);
    Array(Array &);
    ~Array(){}
    void setData();
    void display();
    int total();
    int avg()
    {
        return (total()/5);
    }
    int isMore(int val)
    {
        return(total()>val);
    }
    int isLess(int val)
    {
        return (total()<val);
    }
    int isMore(Array &t)
    {
        return(total()>t.total());
    }
    int isLess(Array &t)
    {
        return (total()<t.total());
    }
    void set(int pos,int d)
    {
        x[pos]=d;
    }
    int get(int pos)
    {
        return x[pos];
    }
    void reverse();
    int maxvalue();
    int minvalue();
    int maxposition();
    int minposition();
    int isOrdered();
    int sSearch(int val);
    int bSearch(int val);
    void sort();
};

Array::Array()
{
    for(int i=0;i<5;i++)
    {
        x[i]=0;
    }
}
Array::Array(int val)
{
    for(int i=0;i<5;i++)
    {
        x[i]=val;
    } 
}
Array::Array(Array &t)
{
    for(int i=0;i<5;i++)
    {
        x[i]=t.x[i];
    } 
}
void Array::setData()
{
    cout<<"\ndata\n";
    for(int i=0;i<5;i++)
    cin>>x[i];
}
void Array::display()
{
    cout<<"\ndata\n";
    for(int i=0;i<5;i++)
    cout<<" "<<x[i];
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
void Array::reverse()
{
    int i=0,j=4,tmp;
    while(i<j)
    {
        tmp=x[i];
        x[i]=x[j];
        x[j]=tmp;
        i++;
        j--;
    }
}
int Array::maxvalue()
{
    int max=x[0],i=1;
    while(i<5)
    {
        if(x[i]>max)
        max=x[i];
        i++;
    }
    return max;
}
int Array::minvalue()
{
    int min=x[0],i=1;
    while(i<5)
    {
        if(x[i]<min)
        min=x[i];
        i++;
    }
    return min;
}
int Array::minposition()
{
    int pos=0,i=1;
    while(i<5)
    {
        if(x[i]<x[pos])
        pos=x[i];
        i++;
    }
    return pos;
}
int Array::maxposition()
{
    int position=0,i=1;
    while(i<5)
    {
        if(x[i]>x[position])
        position=x[i];
        i++;
    }
    return position;
}
int Array::isOrdered()
{
    int i=1;
    while(i<5)
    {
        if(x[i]<x[i-1])
        break;
        i++;
    }
     return (i==5);
}
int Array::sSearch(int sv)
{
    int i=0;
    while(i<5)
    {
        if(x[i]==sv)
        break;
         i++;
    }
    return (i!=5);
}
 void Array::sort()
 {
    int i=0,j,pos,tmp;
    for(i=0;i<4;i++)
    {   pos=i;
        for(j=i+1;j<5;j++)
        {
            if(x[j]<x[pos])
            pos=j;
        }
        if(i!=pos)
        {
            tmp=x[i];
            x[i]=x[pos];
            x[pos]=tmp;
        }
    }
 }
int Array::bSearch(int sv)
{
   int i=0,l=0,r=4,mid;
   while(l<=r)
   {
      mid=(l+r)/2;
      if(x[mid]==sv)
      break;
      else if(sv<x[mid])
      r=mid-1;
      else
      l=mid+1;
    
   }
   if(l<=r)
   return 1;
   else
   return 0;
}
