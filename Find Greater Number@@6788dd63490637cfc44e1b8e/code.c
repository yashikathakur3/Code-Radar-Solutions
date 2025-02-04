#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a,&b);
    if (a>b){
        printf(a);
    }
    if(b>a){
        printf(b);
    }
    return 0;
}