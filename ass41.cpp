#include <iostream>
using namespace std;

class Array {

					
    int size;
    int* arr;
public:
	Array();
	Array(int);
	void display();
	void Accept();
	
	~Array();
	Array(Array &);							
	
};

 Array::Array()
 { 
 	size=5;
 	arr=new int(size);
 	for(int i=0; i<=size; i++)
 	arr[i]=0;
 	}
 	
 Array::Array(int a)
 {
 	size=5;
 	arr=new int[size];
 	for(int i=0; i<size; i++)
 	arr[i]=0;
 }
 
 void Array::Accept()
 { 
 	cout<<"enter elements:"<<endl;
 	for(int i=0; i<size ;i++)
 	cin>>arr[i];
 }
 
 Array::~Array()
 {
  delete []arr;
 }
 
 Array::Array(Array &a)  //Array a3(a2)
 {
	size=a.size;
	arr=new int[size];
	for(int i=0; i<size;i++)
	arr[i]=a.arr[i];
} 
	
 
 void Array::display()
 {
  for(int i=0; i<size; i++)
  cout<<arr[i]<<" ";
  }
 	
 	
 	int main(){
 	Array a1;
 	Array a2(12);
 	a1.Accept();
 	a1.display();
 	a2.Accept();
 	a2.display();
 	
 	Array a3(a2);
 	a3.display();
 	return 0;
 	}
 	
 	
	
