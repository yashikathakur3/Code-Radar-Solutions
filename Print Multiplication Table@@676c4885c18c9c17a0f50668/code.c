#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;N<=10;i++){
        printf("%d",N);
    }
    return 0;
}