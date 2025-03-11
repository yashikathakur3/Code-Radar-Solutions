#include <stdio.h>

int main() {
    int num_students;

    // Asking the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Declaring an array to store marks of the students
    float marks[num_students];
    float sum = 0.0, average;

    // Loop to get marks for each student
    for(int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];  // Add the marks to the total sum
    }

    // Calculating the average
    average = sum / num_students;

    // Displaying the average
    printf("The average marks of the students are: %.2f\n", average);

    return 0;
}
