#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    for (i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
}