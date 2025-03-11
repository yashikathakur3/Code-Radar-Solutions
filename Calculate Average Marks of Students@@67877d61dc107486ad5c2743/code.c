#include <stdio.h>

int main() {
    int num_students;

    scanf("%d", &num_students);

    
    float marks[num_students];
    float sum =  average;

    
    for(int i = 0; i < num_students; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];  
    }

    average = sum / num_students;

    printf("Average Marks: %.2f\n", average);

    return 0;
}
