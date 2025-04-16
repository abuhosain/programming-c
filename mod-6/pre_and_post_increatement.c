#include <stdio.h>

int main(){
 int x = 5;
    int y = ++x;
    int c = x++;
    printf("%d %d %d\n", x, y, c); // Output: 7 6 6
   return 0;
};