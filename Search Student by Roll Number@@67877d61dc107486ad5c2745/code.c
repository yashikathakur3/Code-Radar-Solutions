#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function to search for a student by roll number
void searchStudentByRollNo(struct Student students[], int n, int rollNo) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == rollNo) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNo);
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // To read string with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    int rollNoToSearch;
    printf("Enter roll number to search: ");
    scanf("%d", &rollNoToSearch);

    // Search for the student
    searchStudentByRollNo(students, n, rollNoToSearch);

    return 0;
}