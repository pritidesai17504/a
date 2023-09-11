#include<iostream>
using namespace std;

//use of array as a member of class
class result
{
    int rno;
    int mrk[5];
    public:
    
    void setMarks();
    void setData();
    void setData(int);
    void display();
    int total();
    int avg()
    {
        return total()/5;
    }
    int getNo()
    {
        return rno;
    }
    int isMore(int a)
    {
        return (total()>a);
    }
    int isMore(result &t)
    {
        return (avg()>t.avg());
    }
    int isLess(int a)
    {
        return (total()<a);
    }
     int isLess(result &t)
    {
        return (avg()<t.avg());
    }

};
void result::setMarks()
    {
        cout<<"\neneter marks\n";
        for(int i=0;i<5;i++)
        {
            cin>>mrk[i];
        }
    }
void result::setData(int no)
    {
        rno=no;
        setMarks();
    }
void result::setData()
{
    cout<<"roll no:";
    cin>>rno;
    setMarks();
}
int result::total()
{
    int i=1,tot=mrk[0];
    while(i<5)
    {
        tot=tot+mrk[i];
        i++;
    }
    return tot;
}
void result::display()
{
     cout<<"\nroll no:";
     cout<<"\nmarks\n";
     for(int i=0;i<5;i++)
     {
        cout<<" "<<mrk[i];
     }
     cout<<"\ntotal:"<<total();
     cout<<"\navg"<<avg();
}

int main()
{
    result p;
    result q;
    p.setData(6);
    q.setData(8);
    p.display();
    q.display();
    if(p.isMore(70))
    cout<<"\n>70";
    else
    cout<<"\n<70";
     if(p.isLess(q))
    cout<<"\np is less";
    else
    cout<<"\n q is less";
}