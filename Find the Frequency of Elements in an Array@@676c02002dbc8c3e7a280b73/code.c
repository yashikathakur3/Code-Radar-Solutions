#include <stdio.h>
int main() {
    int n;
    scanf("%d" , &n);
    int arr[n];
    int copy[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    
    for(int i=0; i<n ; i++){
        copy[i] = arr[i];
    }
    int r = sizeof(arr) / sizeof(arr[0]);
    // printf("%d %d" , r , n);
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (copy[i] == copy[j]) {
                for (int k = j; k < n - 1; k++) {
                    copy[k] = copy[k + 1];
                }
                n--; 
                j--;
            }
        }
    }

     int temp;
    for(int i=0; i<r-1; i++){
        for(int j=0; j<r-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }  
   }
  
  for(int i=0; i<n; i++){
    int y=0;
         for(int j=0; j<r ; j++){
            if(arr[j] == copy[i]){
                y++;
            }
     }
     printf("%d %d \n", copy[i] , y);
     }

   
    return 0;
}