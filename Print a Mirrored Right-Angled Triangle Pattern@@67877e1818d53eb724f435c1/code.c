#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" ");
        }
    for(int g=0;g<=i;g++){
        printf("*");
    }
    printf("\n");
    }
    return 0;

}