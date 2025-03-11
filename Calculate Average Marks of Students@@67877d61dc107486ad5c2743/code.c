#include <stdio.h>

struct student{
    int roll_number;
    char name[50];
    float marks;
};
int main() {
    int n;
    float total_marks =0.0;

    scanf("%d",&n);
    struct student students[n];

    for(int i=0;i<n;i++){
        scanf("%d",&students[i].roll_number);
        scanf("%s",&students[i].name);
        scanf("%f",&students[i].marks);

        total_marks += students[i].marks;

    }
    
    printf("Average Marks : %2f\n",total_marks/n);

    return 0;
}
