#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=b*b;
    if((a==c)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}