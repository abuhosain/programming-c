#include <stdio.h>

int main(){
    int n;
    int arr[1000];
    int x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x){
                printf("Pair found: %d, %d\n", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("No pair found\n");
   return 0;
};