#include <stdio.h>

void sum(int a, int b){
  int val = a + b;
  printf("The sum is: %d\n", val);
}

int main(){
  int a,b;
  scanf("%d %d", &a, &b);
  sum(a, b);
   
   return 0;
};