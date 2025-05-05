#include <stdio.h>

int sum(){
  int a,b;
  scanf("%d %d", &a, &b);
  return a + b;
}

int main(){
  
   int val = sum();
   printf("The sum is: %d\n", val);
   return 0;
};