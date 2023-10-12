#include<iostream>
using namespace std;

int add(int a,int b)
{
 return a+b;
}

float add(float a,float b)
{
 return a+b;
}

double add(double a,double b)
{
 return a+b;
}


int main()
{
 cout<<add(10,20)<<endl;
 cout<<add(10.2f,20.2f)<<endl;
 cout<<add(10.2f,20.2f)<<endl;

 return 0;
 
 }
