#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    printf("%d %d",&a,&b);
    if((a<0)&&(b<0)){
        prinf("Same Sign");
    }
    else if((a>0)&&(b>0)){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}