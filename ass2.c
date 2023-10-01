#include<stdio.h>

int main()
{
 int m1,m2,m3,m4,m5;
 float avg;
 
 printf("enter marks in five subjects\n");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

// avg=(m1+m2+m3+m4+m5)/5.0f;   // implicit typeconversion

avg=(float)(m1+m2+m3+m4+m5)/5;  // explicit typeconversion

printf("average=%f\n",avg);

return 0;

}
