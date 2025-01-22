/**
 * @Author: DASTAN_ALAM
 * @Date:   13-05-2022  Fri 12:13:22 PM  12:13:22
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 13-05-2022  Fri 12:16:35 PM  12:16:35
 */
#include <iostream>
using namespace std;
// no argument but return valuee  
// without argument and with return valuee 
int value();
int main()
{
    int a;
    a=value();
    cout<<a;
    return 0;
}
int value()
{
    int b,c,d;
    b=5;c=5;
    d=b+c;
    return d;
}
