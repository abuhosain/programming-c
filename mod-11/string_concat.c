#include <stdio.h>
#include <string.h>
int main(){
   char a[100], b[100];
   scanf("%s %s", a, b);

  //  int a_len = strlen(a);
  //  int b_len = strlen(b);

  //  for(int i = 0; i <= b_len; i++){
  //     a[i + a_len] = b[i];
  //  }

  // alternative
  strcat(a, b); // Concatenate b to a

   printf(("%s %s"), a, b);
   return 0;
};