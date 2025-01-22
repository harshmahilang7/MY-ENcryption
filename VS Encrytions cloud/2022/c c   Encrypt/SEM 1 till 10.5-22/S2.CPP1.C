#include<stdio.h>
#include<conio.h>

// Program Without string Function
void main()
{
 char str1[50],str2[50];
 int i,temp=0,l=0,choice,vow=0,punc=0;
 clrscr();
 printf("Choose the Option:\n");
 printf("1. String length\n");
 printf("2. Reverse string\n");
 printf("3. String Copy\n");
 printf("4. Pallindrome\n");
 printf("5. count vowels and consonant and punctuation mark\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1: printf("Enter the string:\n"); // String Length
	  scanf("%s",&str1);
	  while(1)
	   {
	    if(str1[l]=='\0')
	     {
	       break;
	     }
	    l++;
	   }
	  printf("String Length=%d\n",l);
	  break;

  case 2: printf("Enter the string:\n"); //String Reverse
	  scanf("%s",&str1);
	  while(1)
	   {
	    if(str1[l]=='\0')
	     {
	      break;
	     }
	    l++;
	   }
	  for(i=0;i<l;i++)
	   {
	    str2[l-1-i]=str1[i];
	   }
	  printf("Reverse=%s",str2);
	  break;

  case 3: printf("Enter the first string:\n");   //String Copy
	  scanf("%s",&str1);
	  printf("Enter the Second String");
	  scanf("%s",&str2);
	  while(1)
	   {
	    if(str1[l]=='\0')
	     {
	      break;
	     }
	    l++;
	   }
	  for(i=0;i<l;i++)
	   {
	    str2[i]=str1[i];
	   }
	  printf("String Copy=%s",str2);
	  break;

  case 4: printf("Enter the string:\n");  //palindrome
	  scanf("%s",&str1);
	  while(1)
	   {
	    if(str1[l]=='\0')
	     {
	      break;
	     }
	    l++;
	   }
	  for(i=0;i<l;i++)
	   {
	    str2[l-1-i]=str1[i];
	   }
	  for(i=0;i<l;i++)
	   {
	    if(str1[i]==str2[i])
	     {
	      temp++;
	     }
	   }
	  if(temp==l)
	   {
	    printf("\nPallindrome");
	   }
	  else
	   printf("\nNon Pallindrome");
	  break;

  case 5: printf("Enter the string:");
	 scanf("%s",&str1);
	 // gets(str1);
	  while(1)
	   {
	    if(str1[l]=='\0')
	     break;
	     l++;
	   }
	  for(i=0;i<l;i++)
	   {
	    if(str1[i]=='\0')
	     {
	      break;
	     }
	    else if(str1[i]==65||str1[i]==69||
		    str1[i]==73||str1[i]==79||
		    str1[i]==85||str1[i]==97||
		    str1[i]==101||str1[i]==105||
		    str1[i]==111||str1[i]==117
		   )
		  {
		   vow++;
		  }
	   else if(str1[i]==33||str1[i]==34||
		   str1[i]==39||str1[i]==44||
		   str1[i]==45||str1[i]==46||
		   str1[i]==58||str1[i]==59||
		   str1[i]==63||str1[i]==96
		  )
		{
		  punc++;
		 }
	  }
	  printf("\nvowels=%d",vow);
	  printf("\nconsonant=%d",l-vow-punc) ;
	  printf("\nPunctuation mark=%d",punc);
	  break;

  default:printf("Wrong Choice");
 }
 getch();
}