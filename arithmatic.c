#include<stdio.h>

int main () {
    int a = 40;
    int b = 20;
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    int sub = a - b;
    printf("The difference of %d and %d is %d\n", a, b, sub);
    int mul = a * b;
    printf("The product of %d and %d is %d\n", a, b, mul);
    int div = a / b;
    printf("The quotient of %d and %d is %d\n", a, b, div);
    return 0;
}