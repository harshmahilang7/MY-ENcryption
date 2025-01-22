/**
 * @Author: DASTAN_ALAM
 * @Date:   23-05-2022  Mon 11:00:01 PM  23:00:01
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 23-05-2022  Mon 11:41:11 PM  23:41:11
 */
#include <iostream>
using namespace std;
class si
{
    int sim, p, r, t;

public:
    si(int q, float w, int e)
    {
        p = q;
        r = w;
        t = e;
        sim = (p * r * t) / 100;
    }
    void show()
    {
        cout << "the value of p = " << p << endl;
        cout << "the value of r = " << r << endl;
        cout << "the value of t = " << t << endl;
        cout << "its si is = " << sim << endl;
    }
    ~si() { cout << "m distructor hu"; }
};
int main()
{
    si obj1(1000, 2, 5);
    obj1.show();
    return 0;
}
