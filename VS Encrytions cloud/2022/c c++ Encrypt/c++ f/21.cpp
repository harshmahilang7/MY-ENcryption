/**
 * @Author: DASTAN_ALAM
 * @Date:   24-05-2022  Tue 12:02:38 AM  00:02:38
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 24-05-2022  Tue 12:21:10 AM  00:21:10
 */
#include <iostream>

using namespace std;
// sendinig vla to cunsttrutor for dirived class
// sending parameters to super class constructor
class a
{public:
  a(int x)
  {
      cout<<x<<endl;
  }  
};
class b:public a
{
  public:
  b(int q,int w):a(w)
  {
      cout<<q<<endl;
  }  
};
int main()
{
    b obj1(1,3);
    return 0;
}