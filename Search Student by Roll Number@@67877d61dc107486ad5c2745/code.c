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
            printf("Roll Number: %d, ", students[i].rollNo);
            printf("Name: %s", students[i].name);
            printf("Marks: %.2f", students[i].marks);
            return;
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        
        scanf("%d", &students[i].rollNo);
       
        scanf(" %[^]", students[i].name); 
        
        scanf("%f", &students[i].marks);
    }

    int rollNoToSearch;
    scanf("%d", &rollNoToSearch);

    
    searchStudentByRollNo(students, n, rollNoToSearch);

    return 0;
}