#include<iostream>
using namespace std;

int mul(int,int,int=1,int=1);





int main()
{

 cout<<mul(1,2,3,4)<<endl;
 cout<<mul(1,2,3)<<endl;
 cout<<mul(1,2)<<endl;
 return 0;
 
 }
 
 int mul (int a,int b,int c,int d)
 {
 
  return a*b*c*d;
  }
