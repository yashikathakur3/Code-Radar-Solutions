#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if((a==b)){
        printf("Equal");
    }
    /*else {
        printf("%s" , (a>b)? "First" : "Second");
    }*/
    else if((a>b)){
        printf("First");
    }
    else if((a<b)){
        printf("Second");
    }
    
    return 0;
}