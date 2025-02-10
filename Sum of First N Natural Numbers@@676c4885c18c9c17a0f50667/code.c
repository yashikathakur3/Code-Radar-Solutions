#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        printf("%d",i+i);
    }

    return 0;
}