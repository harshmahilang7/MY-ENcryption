/**
 * @Author: DASTAN_ALAM
 * @Date:   23-05-2022  Mon 05:24:06 PM  17:24:06
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 23-05-2022  Mon 05:29:02 PM  17:29:02
 */
#include <iostream>

using namespace std;
// default constructors
class opps
{
  int a,b;
  public:
  opps(); 
  void show(); 
};
opps::opps()
{
    a=100;
    b=200;
}
void opps::show()
{
    cout<<a<<endl;
    cout<<b<<endl;
}

int main(int argc, char const *argv[])
{
    opps obj1;
    obj1.show();
    return 0;
}
