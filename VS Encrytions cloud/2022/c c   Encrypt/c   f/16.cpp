/**
 * @Author: DASTAN_ALAM
 * @Date:   23-05-2022  Mon 05:34:58 PM  17:34:58
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 23-05-2022  Mon 06:11:38 PM  18:11:38
 */
#include <iostream>

using namespace std;
// constructor overloading
class qwer
{
    int a,b;
    public:
    qwer()
    {
        a=11;
        b=12;
    }
    qwer(int x)
    {
        a=b=x;
    }
    qwer(int w,int e)
    {
        a=w;
        b=e;
    }
    void show()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    
};
int main()
{
    qwer obj1,obj2,obj3;
    obj1.show();
    obj2=qwer(100);
    obj2.show();
    obj3=qwer(200,300);
    obj3.show(); 
    return 0;
}