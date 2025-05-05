#include <stdio.h>

int sum(int a, int b){
  return a + b;
}

int main(){
  int a,b;
  scanf("%d %d", &a, &b);
   int val = sum(a, b);
   printf("The sum is: %d\n", val);
   return 0;
};