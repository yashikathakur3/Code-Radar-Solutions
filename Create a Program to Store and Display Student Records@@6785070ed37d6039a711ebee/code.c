#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int num;
    scanf("%d", &num);

    struct Student students[num];

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
