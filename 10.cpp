#include<iostream>
#include"myarray.h"
using namespace std;

int main()
{
    Array p;
    p.setData();
    p.display();
    cout<<"total"<<p.total();
    int min=p.minvalue();    
     int max=p.maxvalue(); 
     cout<<"range"<<min<<"-"<<max;
}