/**
 * @Author: DASTAN_ALAM
 * @Date:   23-05-2022  Mon 11:41:31 PM  23:41:31
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 23-05-2022  Mon 11:48:58 PM  23:48:58
 */
#include <iostream>

using namespace std;
// amgouous problem
class a
{public:
    void myfum()
    {
        cout << "class a";
    }
};
class b
{public:
    void myfum()
    {
        cout << "class b";
    }
};
class c:public a,public b
{
    
};
int main()
{
    c obj1;
    obj1.a::myfum();
    obj1.b::myfum();
    return 0;
}
