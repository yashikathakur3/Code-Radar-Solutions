#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    int b = a;
    //char c=(char)65;
    if ((a<=65)&&(a>=90)){
        printf("Uppercase");
    }
    if ((a<=97)&&(a>=122)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}