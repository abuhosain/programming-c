#include <stdio.h>

void hello()
{
  printf("Hello\n");
  hello();
}

int main()
{
  printf("Hello, World!\n");
  hello();
  return 0;
};