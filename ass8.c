#include<stdio.h>

int main()
{ 
 int bs , ts;
 float comm=0,ns;
 printf("enter the salaery and sales amount:\n");
 scanf("%d%d",&bs,&ts);
 if(ts>=5000 && ts<=7500)
 {
 	comm=0.03f*ts;
 }
 
 else if(ts>=7501 && ts<=10500)
 {
 	comm=0.08f*ts;
 }
 
 else if(ts>=10501 && ts<=15000)
 {
 	comm=0.11f*ts;
 }
 
 else if(ts>15000)
 {
 	comm=0.15f*ts;
 }
 
 ns=bs+comm;
 printf("net salery=%f\n",ns);
 return 0;
 
 } 
