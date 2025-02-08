#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d",&a,&b,&c);
    if(( a==b==c)){
        printf("Equilateral");
    }
    //else if(()){
        //printf("Isosceles");
    //}
    
    return 0;
}