/**
 * @Author: DASTAN_ALAM
 * @Date:   23-05-2022  Mon 11:50:31 PM  23:50:31
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 23-05-2022  Mon 11:56:00 PM  23:56:00
 */
#include <iostream>

using namespace std;
class a
{public:
  a()
  {
    cout<<"i am constructor of class a"<<endl;
  }  
};
class b: public a
{public:
    b()
    {
        cout<<"i am consturctor of b"<<endl;
    }
};
int main()
{
    b obj1;
    return 0;
}
