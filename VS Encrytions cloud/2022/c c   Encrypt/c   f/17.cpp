/**
 * @Author: DASTAN_ALAM
 * @Date:   23-05-2022  Mon 06:12:54 PM  18:12:54
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 09-06-2022  Thu 06:13:14 PM  18:13:14
 */
#include <iostream>

using namespace std;
//copy constructor

class qwer
{
   public:
   int a,b;
   qwer(){}
   qwer(int x)
   {
       a=x;
    //    b=y;
   }
   qwer(qwer &y)
   {
       a=y.a;
       cout<<"made in chaina"<<endl;
   }
   void show()
   {
       cout<<a<<endl;
    // cout<<b<<endl;
   }
}; 
int main()
{
    qwer obj1(100),obj2(obj1);
    // obj1.show();
    obj2.show();
    return 0;
}
