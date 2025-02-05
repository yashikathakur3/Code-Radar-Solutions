#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",a);
    if (a%4){
        printf("Leap Year");
    }
    else if(a%100){
        printf("Leap Year");
    }
    else if(a%400){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}