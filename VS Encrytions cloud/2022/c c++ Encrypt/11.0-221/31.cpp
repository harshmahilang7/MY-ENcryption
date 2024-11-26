/**
 * @Author: DASTAN_ALAM
 * @Date:   16-06-2022  Thu 08:16:46 PM  20:16:46
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 14-08-2022 05:54:38 PM       17:54:38
 */
#include <iostream>

using namespace std;
class A
{   int a,b;
    public:
        A (int x = 0, int y = 0)
        {
            a = x;
            b = y;
        }
        void show ()
        {
            cout << a << "+i" << b;
        }
        friend A operator + (A obj1,A obj2);
};
A operator + (A obj1, A obj2)
{
    A obj4;
    obj4.a = obj1.a + obj2.a;
    obj4.b = obj1.b + obj2.b;
    return obj4;
}
int main ()
{
    A obj1(8, 4),obj2(2, 5), obj3;
    obj1.show();
    cout <<" + ";
    obj2.show();
    cout <<" = ";
    obj3 =obj1 + obj2;
    obj3.show();
    return 0;
}