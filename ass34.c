#include<stdio.h>

struct student {
char name[50];
int age;
float marks;
};

int main() {
struct student s1, s2;

// Initialize values in s1
printf("Enter student details");
printf("Name: ");
fgets(s1.name, sizeof(s1.name), stdin);
printf("Age: ");
scanf("%d", &s1.age);
printf("Marks: ");
scanf("%f", &s1.marks);

// Copying values from s1 to s2
strcpy(s2.name, s1.name);
s2.age = s1.age;
s2.marks = s1.marks;

// Printing values in s2
printf("
Student details copied:
");
printf("Name: %s", s2.name);
printf("Age: %d
", s2.age);
printf("Marks: %.2f
", s2.marks);

return 0;
}
b. Copying an entire structure to another: `c
#include

struct student {
char name[50];
int age;
float marks;
};

int main() {
struct student s1, s2;

// Initialize values in s1
printf("Enter student details:
");
printf("Name: ");
fgets(s1.name, sizeof(s1.name), stdin);
printf("Age: ");
scanf("%d", &s1.age);
printf("Marks: ");
scanf("%f", &s1.marks);

// Copying s1 to s2
s2 = s1;

// Printing values in s2
printf("
Student details copied:
");
printf("Name: %s", s2.name);
printf("Age: %d
", s2.age);
printf("Marks: %.2f
", s2.marks);

return 0;
}
