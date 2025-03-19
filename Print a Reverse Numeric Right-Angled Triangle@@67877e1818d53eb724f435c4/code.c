#include <stdio.h>
 int main(){
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
        int c=1;
         for(int j=1;j<=n-i;j++){
             printf("%d",c++);
         }
     printf("\n");
     }

     return 0;}