#include<stdio.h>

void getDate(int *pd,int *pm,int *py){
  printf("enter day month and year");
  scanf("%d%d%d",pd,pm,py);
 }
 
 int main()
 {
  int day,month,year;
  getDate(&day,&month,&year);
  printf("%d/%d/%d\n",day,month,year);
  return 0;
  
  }
