#include<iostream>
#include"myarray.h"
using namespace std;

int main()
{
    Array p,q;
    p.setData();
    q.setData();
    p.display();
    if(p.isMore(q))
    cout<<"\np";
    else
    cout<<"\nq";
    cout<<"\neneter search value";
    int sv;
    cin>>sv;
    int res;
    if(p.isOrdered())
       res=p.bSearch(sv);
    else
        res=p.sSearch(sv);
    if(res==0)
      cout<<"\nnot found";
      else
      cout<<"\nfound";
}