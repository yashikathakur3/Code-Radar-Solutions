#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    scanf("%d",&N);
    for (int i=N;i>0;i--){
      for(int j=i;j>0;j--){
             printf("* ");
        }
    printf("\n");
    }

    
  
    return 0;
}