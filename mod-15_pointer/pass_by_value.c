 #include <stdio.h>
 
 void fun(int x ){
  x = 10;
  printf("x value of fun = %p\n", &x); // 10
 }
 int main(){
    int x = 5;
    fun(x); // pass by value
    printf("x value of main = %p\n", &x); // 5
    return 0;
 };