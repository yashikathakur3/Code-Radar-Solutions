#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[1000];
    char b[1000];
    scanf("%s %s",&a,&b);
    printf("You entered: %s",a++,b++);
    return 0;
}