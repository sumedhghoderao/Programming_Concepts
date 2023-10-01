#include<stdio.h>
int main(){
int n,i,c=0;

printf("enter the number");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
if(n%i==0)
{
 c++;
}
}

if(c==2)
{
 printf("number is prime");
}
 else
{
 printf("number is not prime");
}


return 0;
}
