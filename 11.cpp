#include<iostream>
#include"myarray.h"
using namespace std;

int main()
{
    Array p;
    p.setData();
    p.display();
    if(p.isOrdered()==0)
    cout<<"\nunordered";
    else
    cout<<"\nordered";
    p.reverse();
    p.display();
    if(p.isMore(15))
    cout<<"\nmore";
    else
    cout<<"\nless";
}