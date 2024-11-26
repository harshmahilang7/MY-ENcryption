/**
 * @Author: DASTAN_ALAM
 * @Date:   13-05-2022  Fri 03:45:30 PM  15:45:30
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 13-05-2022  Fri 03:57:17 PM  15:57:17
 */
#include <iostream>

using namespace std;
class first
{
  private:
  int a,b;
  public:
  int c,d;
  int input(int x,int y)
  {
       a=x;
       b=y;
       return 0;
  }
  int output();  
};

int first::output()
{
 cout<<a<<endl;
 cout<<b<<endl;
 cout<<c<<endl;
 cout<<d<<endl;
 return 0;  
   
}

int main()
{
    first dastan;
    dastan.input(5,10);
    dastan.c=15;
    dastan.d=20;
    dastan.output();   
    return 0;
}
