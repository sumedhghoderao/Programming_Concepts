#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){

for(int i=0;i<v.size();i++)
	cout<<v[i]<<"  ";	
	cout<<endl;
	
}



int main()
{

vector<int> v1;
int a;
int b;
    
    cout<<"Enter 10 Values"<<endl;
    for(int i=0 ; i<10 ; i++)
    {
        cin>>a;
        v1.push_back(a);
    }
	
	display(v1);

    cout<<"Enter 2 Values to add at the end of the vector"<<endl;
    
	for(int i=0 ; i<2 ; i++)
    {
        cin>>a;
        v1.push_back(a);
    }
	display(v1);
	
	
	
        v1.pop_back();
        v1.pop_back();
    
        cout<<"displaying vector after popping two end values"<<endl;
	display(v1);
	
	
	
	
	vector<int>::iterator itr; 
	cout<<"display using iterations"<<endl;
	for(itr=v1.begin(); itr!=v1.end();itr++)
	cout<<*itr<<"  ";
	cout<<endl;
	
	

	return 0;
	
	
}


