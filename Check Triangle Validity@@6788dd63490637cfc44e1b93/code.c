#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a+b>c)){
        if((a+c>b)){
            if((b+c>a)){
                printf("Valid");
            }
        else{
            printf("Invalid");
        }    
        }
        else{
            printf("Invalid");
        }
    }
    else{
        printf("Invalid");
    }
    
    return 0;
}