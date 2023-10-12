#include<stdio.h>

int main()
{
 int year;
 
 printf("entrer year \n");
 scanf("%d",&year);
 
 /*if(year%4==0 && year%100!=0 || year%400==0)
 printf("leap\n");
 
 else
 printf("not leap\n");
 */
 (year%4==0 && year%100!=0 || year%400==0)?printf("leap\n"):printf("not leap\n");
 
 return 0;
 }
 
 
 
