#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    //int b=a&1;
    a&1?printf("Set"):printf("Not Set");
    return 0;
}