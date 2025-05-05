#include <stdio.h>
#include <math.h>
int main(){
   int ceil_val = ceil(2.5);
   printf("The ceil value is: %d\n", ceil_val);
   int floor_val = floor(2.5);
   printf("The floor value is: %d\n", floor_val);
  int round_val = round(2.4);
   printf("The round value is: %d\n", round_val);
   double sqrt_val = sqrt(16);
   printf("The sqrt value is: %lf\n", sqrt_val);

   int pow_val = pow(2, 3);
   printf("The pow value is: %d\n", pow_val);

   int abs_val = abs(-5);
    printf("The abs value is: %d\n", abs_val);
   return 0;
};