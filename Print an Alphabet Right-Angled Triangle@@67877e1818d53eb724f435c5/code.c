#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char c='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",c++);
        }
        printf("\n");
        c='A';
    }
    return 0;
}