#include<stdio.h>
void areaCircum(float radius, float *area, float *circumference ) {
    *area = 3.14 * radius * radius;
    *circumference  = 2 * 3.14 * radius;
    }
    
void areaPeri(float length,float breadth,float *rarea,float *rperimeter ){
    *rarea=length*breadth;
    *rperimeter = 2*(length+breadth);
}




int main()
{int choice;

printf("Select 1.Circle 2.Rectangle ");
scanf("%d",&choice);

switch(choice){

case 1:
    float radius, area, circumference ;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    areaCircum(radius, &area, &circumference );

    printf("Area of the circle: %.2f\n", area);
    printf("circumference of the circle: %.2f\n", circumference );
    break;

case 2:
     float length,breadth,rarea, rperimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    areaPeri(length,breadth ,&rarea, &rperimeter);

    printf("Area of the rectangle: %.2f\n", rarea);
    printf("Perimeter of the circle: %.2f\n", rperimeter);
    break;

default:
 printf("Enter the correct choice");
 break;

}

return 0;
}

