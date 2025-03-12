#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void searchStudentByRollNo(struct Student students[], int n, int rollNo) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == rollNo) {
            printf("Roll Number: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        
       
    }

    int rollNoToSearch;
    scanf("%d", &rollNoToSearch);

    
    searchStudentByRollNo(students, n, rollNoToSearch);

    return 0;
}