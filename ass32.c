#include<stdio.h>
#include<string.h>

typedef struct {
int bookId;
char title[20];
double price;
}BOOK;

int main() {
BOOK b1;

printf("Enter the Data of Book(bookID,title,price: \n");
scanf("%d %s %lf", &b1.bookId , &b1.title , &b1.price);

printf("Entered book data is : %d %s %lf \n", b1.bookId,b1.title,b1.price);

return 0;
}

