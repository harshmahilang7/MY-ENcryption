/**
 * @Author: DASTAN_ALAM
 * @Date:   14-05-2022  Sat 04:19:59 PM  16:19:59
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 14-05-2022  Sat 05:16:44 PM  17:16:44
 */
#include <iostream>
//using typedef in class
using namespace std;
typedef class sec
{ 
    int a,b;
    public:
    int c,d;

// funtind in th class 
   
    // int i(int x,int y)
    // {
    //   a=x;
    //   b=y;  
    //   return 0;
    // }
    // int o()
    // {
    //     cout<<"a="<<a<<endl; 
    //     cout<<"b="<<b<<endl; 
    //     cout<<"c="<<c<<endl; 
    //     cout<<"d="<<d<<endl; 
    //     return 0;
    // }
    
    int i(int,int);
    int o();
} d;
// function out from the class

int d::i(int x,int y)
{
    a=x;
    b=y;
    return 0;
}
int d::o() 
{ 
    cout<< "a ="<<a<<endl;    
    cout<< "b ="<<b<<endl;
    cout<< "c ="<<c<<endl;
    cout<< "d ="<<d<<endl;
    return 0;
    
}
int main()
{
    d da;
    da.i(1,2);
    da.c=3;
    da.d=4;
    da.o();
    return 0;
}
