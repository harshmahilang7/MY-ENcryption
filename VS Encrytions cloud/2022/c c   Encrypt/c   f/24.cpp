/**
 * @Author: DASTAN_ALAM
 * @Date:   05-06-2022  Sun 04:03:05 PM  16:03:05
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 05-06-2022  Sun 06:00:12 PM  18:00:12
 */
#include <iostream>
using namespace std;


class a{
  int a1=1,a2=9;
  friend int show();
  public:
  
};
int a::show()
{
//   a1=1;
//   a2=7;
  cout<<a1;
  cout<<a2;
  return 0;
}

int main()
{
    /* code */
    a obj1;
    obj1.show();
    return 0;
}
