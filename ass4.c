#include<stdio.h>


int main()
{
	int a,b,temp;
	printf("enter values of a and b\n");
	scanf("%d%d",&a,&b);
	
	printf("Using 3rd Veriable\n");
	
	temp=a;
	a=b;
	b=temp;	
	printf("swapped values are %d\t%d\n",a,b);
	
	printf("enter values of a and b\n");
	scanf("%d%d",&a,&b);
	
	printf("Without Using 3rd Veriable\n");
	
	a=a+b;
	b=a-b;
	a=a-b;	
	printf("swapped values are %d\t%d\n",a,b);
	
	
	return 0;
}
