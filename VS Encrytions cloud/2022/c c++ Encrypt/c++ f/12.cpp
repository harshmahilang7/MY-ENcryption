/**
 * @Author: DASTAN_ALAM
 * @Date:   20-05-2022  Fri 04:15:17 PM  16:15:17
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 12-06-2022  Sun 01:05:52 PM  13:05:52
 */
#include <iostream>
using namespace std;
class q1
{ 
    public:
    q1()
    {
        cout<<"nothing here"<<endl;   
    }
    q1(int x)
    {
    cout<<"outside of class"<<endl;
    }
    q1(int x,int y)
    {
    cout<<"x"<<x<<"y "<<y<<endl;
    }
    // ~q1()
    // {
    //  cout<<"destuructor"<<endl;   
    // }
};
int main()
{
    q1 w,q(1),e(2,3);

    
    return 0;
}
