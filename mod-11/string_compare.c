#include <stdio.h>
#include  <stdbool.h>
int main(){
   char a[100], b[100];
   scanf("%s %s", &a, &b);
  
   int val = strcmp(a, b);
   
   if(val == 0){
       printf("equal\n");
   }else if(val < 0){
        printf("a is smaller\n");
    }else{
        printf("b is smaller\n");
    }

  //  int i = 0;
  //  while(true){
  //   if(a[i] == "\0" && b[i] == "\0"){
  //        printf("equal");
  //   }  else if(a[i] == "\0"){
  //     printf("a is smaller");
  //     break;
  //   }else if(b[i] == "\0"){
  //     printf("b is smaller");
  //     break;
  //  }else if (a[i] < b[i]){
  //     printf("a is smaller");
  //     break;
  //  }else if (a[i] > b[i]){
  //     printf("b is smaller");
  //     break;
  //  }else if (a[i] == b[i]){
  //    i++;
  //  }
// }
   return 0;
};