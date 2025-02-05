#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int c,s;
    scanf("%d %d",&c,&s);
    if ((s>c)){
        printf("Profit");
    }
    if ((c>s)){
        printf("Loss");
    }
    if ((c==s)){
        printf("NO Profit No Loss");
    }
    printf("%s", welcome());
    return 0;
}