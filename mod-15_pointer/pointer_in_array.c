#include <stdio.h>

int main(){
   int a[5] = {1, 2, 3, 4, 5};
   *(a  +1) = 100;
   printf("%p\n", a); 
   printf("%p\n", &a[0]);
   printf("%d\n", *a);
  //  printf("%p\n", &a[1]);
  //  printf("%p\n", &a[2]);
  //  printf("%p\n", &a[3]);
  //  printf("%p\n", &a[4]);
   return 0;
};