#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a>=18){
        printf("Eligible");
    }
    
    return 0;
}