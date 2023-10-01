#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int len,brd,i,j;
	char ch;
	printf("enter length and breadth of a rectangle:\n");
	scanf("%d%d",&len,&brd);
	getchar();
	+
	printf("enter character:\n");
	scanf("%c",&ch);
	for(i=0;i<len;i++){
	printf("%c",ch);
}
printf("\n");
for(i=0;i<brd;i++)
{
printf("%c",ch);
for(j=0;j<len-2;j++)
{
 printf(" ");
 }
 
 printf("%c\n",ch);
 }
 
 for(i=0;i<len;i++)
 {
  printf("%c",ch);
 }
  
  printf("\n");
  return 0;
  
  }
