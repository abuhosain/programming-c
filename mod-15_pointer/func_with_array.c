#include <stdio.h>

void fun(int arr[])
{
  arr[1] = 200;
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  fun(arr);
  for(int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
};