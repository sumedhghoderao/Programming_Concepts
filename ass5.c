#include<stdio.h>

int main()
{
 int bs;
 float hra,da,pf,gs,ns;
 
 printf("enter basic salary;\n");
 scanf("%d",&bs);
 
 hra=0.5f*bs;
 da=0.3*bs;
 
 gs=bs+hra+da;
 
 pf=0.125f*gs;
 
 ns=gs - pf;
 
 printf("gross salary=%f \nNET SALARY=%f\n",gs,ns);
 
 return 0;
 
 }
