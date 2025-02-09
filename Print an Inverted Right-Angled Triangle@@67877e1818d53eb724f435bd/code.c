#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i,j,N;
    scanf("%d %d %d",&i,&j,&N);
    for (i=N;i>0;i--){
      for(j=N;j>0;j--){
        printf("*");
        }
    printf("\n");
    }

    
  
    return 0;
}