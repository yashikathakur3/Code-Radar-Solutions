#include <stdio.h>
 int main(){
     int n;
     scanf("%d",&n);
        printf("%d",n);
     for(int i=1;i<=n;i++){
        int c=1;
         for(int j=1;j<=n-1-i;j++){
             printf("%d",c++);
         }
     printf("\n");
     }

     return 0;}