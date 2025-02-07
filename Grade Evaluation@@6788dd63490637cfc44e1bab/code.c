#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case 'A':printf("Excellent");break;
        case'B':printf("Good");break;
        case'C':printf("Average");break;
        case 'D':printf("Below");break;
        case'F':printf("Fail");break;
        default:printf("Invalid grade");
    }
    printf("%s", welcome());
    return 0;
}