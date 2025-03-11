#include <stdio.h>

int main() {
    int num_students;
    float passing_score = 50.0;  

    
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    
    float marks[num_students];
    int all_passed = 1;  

    for(int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);

        
        if(marks[i] < passing_score) {
            all_passed = 0;  
        }
    }

    if(all_passed) {
        printf("All students passed!\n");
    } else {
        printf("Not all students passed.\n");
    }

    return 0;


}