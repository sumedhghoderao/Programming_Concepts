#include<stdio.h>

 void insertelement(int *arr,int *n)
 {
  int val,pos,i;
  printf("enter value to be insertd inside an arrey:\n");
  scanf("%d",&val);
  printf("enter the position of the element:\n");
  scanf("%d",&pos);
  for(i=*n; i>pos;i--)
  {
  arr[i]=arr[i-1];
  }
  arr[pos]=val;
  (*n)++;
  }
  
  void printarray(int *arr ,int n)
  {
  	int i;
  	for(i=0;i<n;i++)
  	printf("%d",arr[i]);
  	printf("\n");
  	}
  	
  int main()
  {
   int arr[100],n,i;
   printf("how many elements?\n");
   scanf("%d",&n);
   printf("enter array elements\n");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   
   
   insertelement(arr,&n);
   printarray(arr,n);
   return 0;
   
   }
