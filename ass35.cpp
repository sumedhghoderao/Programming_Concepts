#include<iostream>
using namespace std;

int main(){



int i;
int sum=0;
int n;
float avg;
int *p =new int[n];
cout<<"enter number of subjets"<<endl;
cin>>n;

cout<<"enter your marks"<<endl;
for(i=0;i<n;i++)
        cin>>p[i];


for(i=0;i<n;i++){

sum=sum+p[i];

} 

avg=sum/n;

cout<<"average="<<avg<<endl;    
     
     delete[]p;
        
        cout<<endl;
        
        return 0;
        }
             

