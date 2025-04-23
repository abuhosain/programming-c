#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
   char a[100], b[100];
   scanf("%s %s", a, b);
   // int length = strlen(b);

   // for(int i = 0; i <= length; i++){
   //    a[i] = b[i];
   // }
   strcpy(a, b);

   printf("%s %s\n", a, b);
   return 0;
};