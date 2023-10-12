#include<stdio.h>
void CharLine(int len, char ch)
{
 int i;
 for(i=0;i<=len;i++)
 printf("%c",ch);
 printf("\n");
}
 
 int main()
 {
  int len;
  char ch;
  printf("enter length of borders:\n");
  scanf("%d",&len);
  getchar();
  printf("enter character:\n");
  scanf("%c",&ch);
  
  CharLine(len,ch);
  printf("data type size in bytes \t\t \n");
  
  CharLine(len,ch);
  printf("integer \t\t size	4\n");
  
  CharLine(len,ch);
  printf("character \t\t size	1\n");
  
  CharLine(len,ch);
  printf("float \t\t         size	4\n");
  
  return 0;
  
 }
