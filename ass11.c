#include<stdio.h>
#include<stdlib.h>

int main()
{
 
 char ch;
 printf("enter charater:\n");
 scanf("%c",&ch);
 
 if(ch>=65 && ch<=90)
 {
 	ch=ch+32;
 }
 
 else if(ch>=97 && ch<=122)
 {
 	ch=ch-32;
 }
 
 else 
 {
 	printf("not an alphabet\n");
 	exit(0);
 }
 
 printf("opposite case alphabet  - %c\n",ch);
 
 return 0;
 
 }
