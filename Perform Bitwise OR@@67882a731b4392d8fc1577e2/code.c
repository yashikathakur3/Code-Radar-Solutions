#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("%d\n %d", a|b);
    return 0;
}