/**
 * @Author: DASTAN_ALAM
 * @Date:   15-05-2022  Sun 10:46:49 AM  10:46:49
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 15-05-2022  Sun 10:57:01 AM  10:57:01
 */

// type def in function,......
#include <iostream>

using namespace std;
typedef void dast;
typedef int num;
num f1(num x,num y)
{
    num z=x+y;
    return z;
}
dast f2()
{
    cout<<"dastan_alam";
}
num main( )
{
    // cout<<"hmfg";
    num a=1,b=4,c;
    c=f1(a,b);
    cout<<c<<endl;
    f2();
    return 0;
}
