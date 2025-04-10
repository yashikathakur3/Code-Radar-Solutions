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

    for(int k=0;k<n;k++){
        for(int l=0;l<k;l++){
            printf(" ");
        }
    for(int m=0;m<n-k-1;m++){
        printf("*");
    }
    for(int p=1;p<=n-k-1;p++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}