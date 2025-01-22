/**
 * @Author: DASTAN_ALAM
 * @Date:   11-05-2022  Wed 03:45:08 PM  15:45:08
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 11-05-2022  Wed 06:15:52 PM  18:15:52
 */
// binary to dec coverter.....
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a,b,e=0,f=0,d=0,q;
    cout<<"enter the number";
    cin>>a;
    int copy = a, temp = 0;
    while(copy != 0) 
    {
        temp = copy%10;
        if((temp==0) || (temp==1)) 
        {
            copy = copy/10;
            if(copy == 0) 
            {
                while (a>0)
                {
                    e=a%10;
                     q=e*pow(2,f);
                     d+=q;
                     a=a/10;
                     f++;
                }
                cout<<d<<endl;
            }
        }
    else 
    {
    cout<<"Not a valid binary number. Try again\n";
    main();
    }
    }
    return 0;
}
