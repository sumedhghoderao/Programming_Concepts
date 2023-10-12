#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *marks;
    float sum = 0.0, average;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    marks = (int*) malloc(n * sizeof(int));

    if (marks == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }

    printf("Enter the marks for each subject:\n");
    for (int i = 0; i < n; i++) {
        printf("Marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculate average
    average = sum / n;

    printf("The average marks of all subjects is: %.2f\n", average);

    // Free the dynamically allocated memory
    free(marks);

    return 0;
}
