
#include <stdio.h>

int main() {
    float math, science, computer;
    float total, average;

    printf("Enter marks in Mathematics: ");
    scanf("%f", &math);

    printf("Enter marks in Science: ");
    scanf("%f", &science);

    printf("Enter marks in Computer: ");
    scanf("%f", &computer);

    total = math + science + computer;
    average = total / 3;

    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    if (average >= 90) {
        printf("Grade: A\n");
    } else if (average >= 75) {
        printf("Grade: B\n");
    } else if (average >= 60) {
        printf("Grade: C\n");
    } else if (average >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}