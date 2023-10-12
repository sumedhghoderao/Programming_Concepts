#include<stdio.h>

int* max(int *px, int *py)
 {
    if (*px > *py) {
    
        return px;
    }
     else if(*py>*px) 
     {
        return py;
    }
    
    else
        
         return NULL;
}

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int* p = max(&a,&b);
    printf("The maximum number is %d and its address is %p\n", *p,p);

    return 0;
}
