#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);

    struct Student students[num];

    // Reading student information
    for (int i = 0; i < num; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); // To read string with spaces
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Displaying student information
    printf("\nClass Information:\n");
    for (int i = 0; i < num; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
