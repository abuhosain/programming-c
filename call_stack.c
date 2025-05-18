#include <stdio.h>

void Mello(){
   printf("Mello\n");
}

void gello(){
   printf("Gello\n");
    Mello();
}

void hello(){
   printf("Hello\n");
    gello();
}

int main(){
   printf("Hello, World!\n");
    hello();
   return 0;
};