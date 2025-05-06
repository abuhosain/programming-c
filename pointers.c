#include <stdio.h>

int main(){
  int x = 5;
  printf("%d\n", x); 
  printf("%p\n", &x);

  int* ptr;
  ptr = &x;
  *ptr = 10;
  printf("%p\n", ptr); 
  printf("%d\n", *ptr); 
  printf("%d\n", x);
  return 0;
};