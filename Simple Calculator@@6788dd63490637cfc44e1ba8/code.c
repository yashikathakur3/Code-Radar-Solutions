#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    int a,b;
    scanf("%d %d %c",&a,&b,&c);
    if((c=='+')){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='/'){
        if(b==0){
        printf("%d",a/b);
        }
        printf("%d",a/b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else {
        printf("error");
    }
    return 0;
}