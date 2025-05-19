#include <stdio.h>

unsigned long long fac(int n)
{
   if (n == 0 || n == 1){
      return 1;
   } else {
      return n * fac(n - 1);
   }
}

int main(){
   int n;
   scanf("%d", &n);
   unsigned long long ans = fac(n);
   printf("%llu\n", ans);
   return 0;
}
