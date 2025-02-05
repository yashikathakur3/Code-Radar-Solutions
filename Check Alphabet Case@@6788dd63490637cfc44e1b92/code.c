#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    int b = a;
    //char c=(char)65;
    if (a<=65)&&(a>=90){
        printf("Uppercase");
    }

    return 0;
}