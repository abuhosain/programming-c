#include <stdio.h>
#include <stdlib.h>

int main()
{
  int T;
  scanf("%d", &T);
  while (T--)
  {
    int N;
    scanf("%d", &N);

    int A[1000], B[1000], C[1000];

    for (int i = 0; i < N; i++)
    {
      scanf("%d", &A[i]);
      B[i] = A[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
      for (int j = 0; j < N - i - 1; j++)
      {
        if (B[j] > B[j + 1])
        {
          int temp = B[j];
          B[j] = B[j + 1];
          B[j + 1] = temp;
        }
      }
    }

    for (int i = 0; i < N; i++)
    {
      C[i] = abs(A[i] - B[i]);
    }

    for (int i = 0; i < N; i++)
    {
      printf("%d ", C[i]);
    }
    printf("\n");
  }

  return 0;
}
