#include <stdio.h>

void sum(){
  int a,b;
  scanf("%d %d", &a, &b);
  int val = a + b;
  printf("The sum is: %d\n", val);
}

int main(){

  sum();
   return 0;
};