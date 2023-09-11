#include<iostream>
using namespace std;
class matrix
{
    int x[3][3];
    public:
    void init();
    void setData();
    void display();
    void add(matrix&,matrix&);
    void sub(matrix&,matrix&);
    void mul(matrix&,matrix&);
    void transpose();
};
void matrix::init()
{
    int i=0,j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j]=0;
        }
    }
}
void matrix::setData(){
       for(int i=0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        {
            cout<<"x[i][j]="<<endl;
            cin>>x[i][j] ;
        }
       }
}

void matrix ::add(matrix &p,matrix &q)
{  
    for(int i=0;i<3;i++)
    {   for(int j=0;j<3;j++)
      {
        x[i][j]=p.x[i][j]+q.x[i][j];
      }
    }
}
void matrix ::sub(matrix &p,matrix &q)
{  int i=0,j=0;
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
      {
         x[i][j]=p.x[i][j]-q.x[i][j];
      }
    }
}
void matrix::mul(matrix &p,matrix &q)
{
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                x[i][j]=p.x[i][k]*q.x[k][j];
            }
        }
    }
}
void matrix::display()
{
     for(int i=0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        {
            cout<<x[i][j]<<"\t";
        }
        cout<<"\n";
       }
}
void matrix::transpose()
{  
    int i=0,j=0,tmp;
      for(i=0;i<3;i++)
      {
        for(j=0;j<i;j++)
        {  tmp=x[i][j];
           x[i][j]=x[j][i];
           x[j][i]=tmp;
        }
      }
     
}

int main()
{
    matrix p,q,r;
    p.init();
    q.init();
    r.init();
    p.setData();
    p.display();
    q.setData();
    q.display();
    cout<<"addition:"<<endl;
    r.add(p,q);
    r.display();
    cout<<"transpose of matrix"<<endl;
    r.transpose();
    r.display();
    cout<<"substraction:"<<endl;
    r.sub(p,q);
    r.display();
    return 0;

}