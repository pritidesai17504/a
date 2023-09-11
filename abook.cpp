#include"book.h"
// int main()
// {
//    book b;
//    b.setData();
//    b.display();
// }
// int main()
// {
//     book p;
//     book *q;
//     q=&p;
//      q->setData();
//      q->display();
// }
// int main()
// {
//     book p[5];
//     int i=0;
//     while(i<5)
//     {
//      p[i].setData();
//       i++;
//     }
//     for(i=0;i<5;i++)
//     {
//         p[i].display();
//     }
// }

// int main()
// {
//     book *p;
//     p=new book;
//     p->setData(6,"let c",500);
//     p->display();
//     p->setData(6,"let c");
//     p->display();
//     delete p;
// }
int main()
{
    book *p;
    p=new book[5];
    int i=0;
    while(i<5)
    {
        (p+i)->setData();
        i++;
    }
    for(i=0;i<5;i++)
    {
        (*(p+i)).display();
        delete[]p;
    }
}