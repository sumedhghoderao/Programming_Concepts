#include<stdio.h>
void findmax(int arr[], int n)
{
 int max,i;
 max=arr[0];
 for(i=1;i<n;i++)
 {
  if(arr[i]>max)
  max=arr[i];
 }
 
 printf("max=%d\n",max);
 
 }
 void findmin(int arr[], int n){
 int min,i;
 min=arr[0];
 for(i=1;i<n;i++)
 {
  if(arr[i]<min)
  min=arr[i];
 }
 
 printf("min=%d\n",min);
 
 }
 void multiplybyfive(int *arr,int n)
 {
  int temp[100], i;
  for(i=0; i<n; i++)
  temp[i]=5*arr[i];
  for(i=0; i<n; i++)
  printf("%d\n ",temp[i]);
  
  }
  
  int main()
  {
   int arr[100],n,i;
   printf("how many element;\n");
   scanf("%d",&n);
   
   printf("enter n intergers\n");
   for(i=0; i<n; i++)
   {
   scanf("%d",&arr[i]);
   }
   
   findmax(arr,n);
   findmin(arr,n);
   multiplybyfive(arr,n);
   printf("\n");
   
   return 0;
   
   } 
