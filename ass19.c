#include<stdio.h>
void fibonacci(int terms){
int a=0,b=1;
int c;
while(terms>2)
{
c=a+b;
printf("%d, ",c);
a=b;
b=c;
terms--;
}

printf("\n");
}

int main(){

int terms;
printf("enter number of terms to be printed of fibonacci series?");
scanf("%d",&terms);
printf("0, 1, ");
fibonacci(terms);
return 0;
}
