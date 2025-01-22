#include<stdio.h>

void main()
{
int n,i,c,a;
scanf("%d",&n);
int p=n,next=(n*2)+(n-2),tc=1;
for(a=1;a<=n;a++){
if(a==1) {
	  for(c=1;c<=(n*2)+(n-2);c++)  {
	  if(c==p || c==n)
	  {printf("*");}
	  else {printf(" ");  }
	  }
	 }
	    else  {
		for(c=1;c<=2*n*n;c++){
		    if(c==p-tc || c==p+tc || c==n-tc|| c==n+tc)
			  { printf("*");}
		    else{ printf(" ");   }
		}
	   tc++;
	  }
     printf("\n");
     }
  }
