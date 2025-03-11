#include <stdio.h>

int main() {
    int num_students, i;
    float sum = 0.0, average;

    // Asking the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Loop to get marks for each student
    for(i = 1; i <= num_students; i++) {
        float marks;
        printf("Enter marks for student %d: ", i);
        scanf("%f", &marks);
        sum += marks;  // Add the marks to the total sum
    }

    // Calculating the average
    average = sum / num_students;

    // Displaying the average
    printf("The average marks of the students are: %.2f\n", average);

    return 0;
}
