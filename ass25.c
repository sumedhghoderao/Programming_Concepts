#include<stdio.h>
void removeelement(int *arr,int *n)
{
 int pos,i;
 printf("enter position of elements to be removed");
 scanf("%d",&pos);
 for(i=pos; i<*n; i++){
 arr[i]=arr[i+1];}
 (*n)--;
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
   
   removeelement(arr,&n);
   printarray(arr,n);
   
   
   return 0;
   
   }
