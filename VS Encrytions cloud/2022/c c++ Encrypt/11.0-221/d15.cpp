/**
 * @Author: Dastan Alam
 * @Date:   26-04-2022  Tue 05:25:00 PM  17:04:15
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 26-04-2022  Tue 05:43:32 PM  17:04:98
 */
#include <iostream>
#include<string.h>
using namespace std;

class student{
    private: 
    int rollno;
    char name[10];
    int marks;
    public:
    static int objectcount;
    student(){
        objectcount++;
    }
  void getdata()
  {
      cout<<"enter the Roll no=";
      cin>>rollno;
      cout<<"enter the name =";
      cin>>name;
      cout<<"enter the marks=";
      cin>>marks;
  } 
  void outdata()
  {
      cout<<"the rollno is ="<<rollno<<endl;;
      cout<<"the name is ="<<name<<endl;;
      cout<<"the marks is ="<<marks<<endl;;
  }
};
int student::objectcount=0;

int main()
{   

student s1;
 s1.getdata();
 s1.outdata();

 student s2;
 s2.getdata();
 s2.outdata();

 student s3;

 s3.getdata();
 s3.outdata();

 cout<<"total object created="<<student::objectcount<<endl;    
    return 0;
}
