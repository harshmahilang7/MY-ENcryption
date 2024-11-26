/**
 * @Author: DASTAN_ALAM
 * @Date:   21-06-2022  Tue 04:54:07 PM  16:54:07
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 21-06-2022  Tue 06:41:51 PM  18:41:51
 */
#include <iostream>
#include <cmath>
using namespace std;
class qwe
{
    public:
    void forpat1()
    {
        int i,j;
        for(i=0;i<=4;i++)
        {
		if(i==1)
			continue;
		cout<<pow(11,i);
		cout<<endl;
        }
    }
    void whilepat1()
    {
        int i=-1;
        while(i<=4)
        {
            i++;
		if(i==1)
		continue;
		cout<<pow(11,i);
    		cout<<endl;
        } 
    }
    void dowhilepat1()
    {
       int i=-1;
        do
        {
        i++;
		if(i==1)
		{continue;}
		cout<<pow(11,i);
		cout<<endl;
        }while(i<=4);
    }
    void forpat2()
    {
        int i,j,k;
	char a[4]={'A','B','C','D'};
	char b[4]={' ','E','F','G'};
	
	for(i=0;i<=3;i++)
	{
		for(j=i;j<=3;j++)
			cout<<a[j-i]<<" ";
		for(k=2;k<=i*2;k++)
			cout<<"  ";
		for(j=i;j<=3;j++)
		{
			if(j==0)
				continue;
			cout<<b[j]<<" ";
		}
	cout<<endl;
	}
    }
void whilepat2()
{
        int i,j,k;
        char a[4]={'A','B','C','D'};
        char b[4]={' ','E','F','G'};
        cout<<"A B C D E F G\n";
        i=1;
    while(i<=3)
	{
		j=i;
        while(j<=3)
		{	cout<<a[j-i]<<" ";
        j++;}
		k=2;
        while(k<=i*2)
		{	cout<<"  ";k++;}
		j=i;
        while(j<=3)
		{
			cout<<b[j]<<" ";
            j++;
		}
	cout<<endl;
    i++;
	}  
}
    void dowhilepat2()
    {
  
    char a[4] = {'A', 'B', 'C', 'D'};
    char b[4] = {' ', 'E', 'F', 'G'};
    cout << "A B C D E F G\n";
    int i = 1;
    do
    {
        int j=i;
        do
        {
            cout << a[j - i] << " ";
            j++;
        } while (j <= 3);
        int k=2;
        do
        {
            cout << "  ";
            k++;
        } while (k <= i * 2);
        
        j=i;
        do
        {
            cout << b[j] << " ";
            j++;
        } while (j <= 3);
        cout << endl;
        i++;
    } while (i <= 3);

    }
};
int main()
{
    int q,n;
    cout<<"selet the patten \n1.\n1\n121\n1331\n14641";
    cout<<"\n2.\nA B C D E F G \nA B C   E F G \nA B       F G \nA           G\n";
    cin>>q;
    cout<<"\nenter the requied number\n1.using for loop\n2.using while loop\n3.using do-while loop\n";
    cin>>n;
    qwe obj1;
    
    switch (q)
    {
    case 1:
    switch (n)
    {
    case 1:
        obj1.forpat1();
        break;
    case 2:
        obj1.whilepat1();
        break;
    case 3:
        obj1.dowhilepat1();
        break;
    default:
        cout<<"fuck you invalid";
        break;
    }
        break;
    case 2:
     switch (n)
    {
    case 1:
        obj1.forpat2();
        break;
    case 2:
        obj1.whilepat2();
        break;
    case 3:
        obj1.dowhilepat2();
        break;
    default:
        cout<<"fuck you invalid";
        break;
    }
        break;


    break;
    default:
        cout<<"fuck you invalid";
        break;
    }    
return 0;
}
