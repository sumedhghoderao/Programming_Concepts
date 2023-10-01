#include<stdio.h>

typedef struct Book{
int bookid;
const char title[50];
float price;
}BK;

void display(BK b1[5])
{
	for(int i=0;i<5;i++)
	{
		printf("%d %s %f\n",b1[i].bookid,b1[i].title,b1[i].price);
	}

}

int main()
{
	BK b[20];
	for(int i=0;i<5;i++)
	{
		printf("Enter data of book(bookid.title,price) :\n");
		scanf("%d%s%f",&b[i].bookid,&b[i].title,&b[i].price);
	}
	display(b);
	return 0;
}




