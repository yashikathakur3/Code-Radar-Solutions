#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if ((a>0)&&(b<0)||(a<b)&&(a>b)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}