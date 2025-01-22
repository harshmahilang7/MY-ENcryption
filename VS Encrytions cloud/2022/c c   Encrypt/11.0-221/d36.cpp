/**
 * @Author: DASTAN_ALAM
 * @Date:   11-05-2022  Wed 07:24:50 PM  19:24:50
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 11-05-2022  Wed 07:32:35 PM  19:32:35
 */
//wap check pythagoern triples or not?
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter 3 number";
    cin>>x>>y>>z;   
    if (pow(z,2)==pow(x,2)+pow(y,2))
    cout<<"yes its is a pythagoern triples";
    else
    cout<<"no its not is a pythagoern triples";
    return 0;
}
