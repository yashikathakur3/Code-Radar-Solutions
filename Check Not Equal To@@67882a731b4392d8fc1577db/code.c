#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a!=b){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}