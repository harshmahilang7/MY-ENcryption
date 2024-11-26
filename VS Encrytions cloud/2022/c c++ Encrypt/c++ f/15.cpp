/**
 * @Author: DASTAN_ALAM
 * @Date:   23-05-2022  Mon 05:29:18 PM  17:29:18
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 23-05-2022  Mon 09:15:08 PM  21:15:08
 */
#include <iostream>

using namespace std;
// peremeter constructor
class qwer
{
   int a,b;
   public:
//    qwer()
//    {
//        a=100;
//        b=200;
//    } 
   void show()
   {
       cout<<a<<endl;
       cout<<b<<endl;
   }
   qwer();
};
qwer::qwer()
{
    a=100;
    b=200;   
}
int main()
{
    /* code */
    qwer obj1;
    obj1.show();
    return 0;
}
