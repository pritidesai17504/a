#include<iostream>
using namespace std;
class student
{
    private:
    int no;
    char nm[15];
    public:
    void setData(); 
    void display();
};
void student :: setData()
{
     cout<<"\nroll no:";
        cin>>no;
        cout<<"\nname:";
        cin>>nm;
}
void student :: display()
{
     cout<<"roll no-"<<no<<"name"<<nm;
}
int main()
{
    student p;
    p.setData();
    p.display();
}
