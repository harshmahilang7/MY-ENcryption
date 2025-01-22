/**
 * @Author: DASTAN_ALAM
 * @Date:   29-05-2022  Sun 04:29:49 PM  16:29:49
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 29-05-2022  Sun 05:00:49 PM  17:00:49
 */
#include <iostream>
using namespace std;
// single leaval inheritance 
class a  
{    
    public:  
    void eat()
        {  cout<<"Barking...";   };    
} ;   

class b
{  
   public:  
    void eat()
       { cout<<"Eating..."<<endl;   };    
};
class c: public b ,public a
{
    
}   ;
int main(void) {  
    c d1;  
    d1.a::eat();  
    d1.b::eat();  
    return 0;  
};  

// int main()
// {
    
//     return 0;
// }
