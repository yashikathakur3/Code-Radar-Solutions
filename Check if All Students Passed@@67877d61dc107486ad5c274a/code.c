#include <stdio.h>

int main() {
    int num_students;
    float passing_score = 50.0;  

    
    
    scanf("%d", &num_students);

    
    float marks[num_students];
    int all_passed = 1;  

    for(int i = 0; i < num_students; i++) {
    
        scanf("%f", &marks[i]);

        
        if(marks[i] < passing_score) {
            all_passed = 0;  
        }
    }

    if(all_passed) {
        printf("All passed!\n");
    } else {
        printf("Not all passed.\n");
    }

    return 0;


}