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
    else if ((c>s)){
        printf("Loss");
    }
    else{
        printf("NO Profit No Loss");
    }
    
    return 0;
}