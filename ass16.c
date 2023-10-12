#include<stdio.h>

int main()
{
 int m,U,C;
 
 m=21;
 while(1)
 {
  printf("the total match sticks are:%d\n",m);
  printf("chose match stick between 1,2,3,4\n");
  scanf("%d",&U);
  if(U<=0 || U>4)
 {
  printf("enter value between 1 and 4 including...\n");
  continue;
  }
  
  m=m-U;
  
  C= 5 - U;
  printf("match sticks select by computer;%d\n",C);  
  m=m-C;
  
  if(m==1)
  {
   printf("total sticks left:%d\n",m);
   printf("you lost the game\n");
   break;
   
   }
   
  }
  
  return 0;
  }
