#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a%5&11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    printf("%s", welcome());
    return 0;
}