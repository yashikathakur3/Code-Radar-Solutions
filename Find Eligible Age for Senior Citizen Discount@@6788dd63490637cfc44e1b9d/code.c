#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age;
    scanf("%d",&age);
    age>=60?printf("Eligible"):printf("Not Eligible");
    return 0;
}