#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%s %s %s",&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby );
    return 0;
}