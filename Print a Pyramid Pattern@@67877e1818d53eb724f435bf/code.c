#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
    for(int g=0;g<=i;g++){
        printf("*");
    }
    for(int h=1;h<=i;h++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}