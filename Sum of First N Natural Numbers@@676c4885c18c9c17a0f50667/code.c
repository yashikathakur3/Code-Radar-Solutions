#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    int sum=0;
    for(int i=0;i<=N;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}