#include <stdio.h>

int main(){
   int n;
   int star = 1;
   scanf("%d", &n);
   for(int i = 1; i <=n; i++){// for lines
    for(int j = n; j > i; j--){ // for space
      printf(" ");
    }
    for(int j = 1; j <= star; j++){ // for start
      printf("*");
    }
    printf("\n");
    star += 2;
   }
   return 0;
};