#include <stdio.h>
 
void fun(int* p ){
 *p = 10;
 printf("x value of fun = %p\n", &p); // 10
}
int main(){
   int x = 5;
   fun(&x); // pass by reference
   printf("x value of main = %p\n", &x);  
   printf("x = %d\n", x);  
   return 0;
};