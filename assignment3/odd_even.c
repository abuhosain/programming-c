#include <stdio.h>

void odd_even()
{
  int N;
  int even_count = 0;
  int odd_count = 0;

  scanf("%d", &N);

  int A[N];

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < N; i++)
  {
    if (A[i] % 2 == 0)
    {
      even_count++;
    }
    else
    {
      odd_count++;
    }
  }

  printf("%d %d\n", even_count, odd_count);
}

int main()
{
  odd_even();
  return 0;
}
