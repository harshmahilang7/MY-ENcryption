/**
 * @Author: DASTAN_ALAM
 * @Date:   21-05-2022  Sat 08:51:46 AM  08:51:46
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 12-06-2022  Sun 01:10:51 PM  13:10:51
 */
#include <iostream>
//copy constructor
using namespace std;
class qwerty
{
    public:
    int a,b;
    qwerty()
    {}
    qwerty(int x,int y)
    {
        a=x;
        b=y;
    }
    qwerty(qwerty&o,qwerty&p)
    {
        a=o.a;
        b=p.b;
        cout<<"using copy constructor(china constructor)"<<endl;
    }
    void show()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main()
{
    qwerty obj1,obj2;
    obj1=qwerty(20,40);
    obj1.show();
    obj2=qwerty(obj1,obj1);
    obj2.show();
    return 0;
}
