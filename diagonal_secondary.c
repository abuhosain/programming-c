#include <stdio.h>

int main()
{
  int r, c;
  scanf("%d %d", &r, &c);
  int arr[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  int flag = 0;
  if (r == c)
  {
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        if (  i + j == r - 1)
        {
        }
        else if (arr[i][j] != 0)
        {
          flag = 1;
          printf("NO");
          return 0;
        }
      }
    }
    if (flag == 0)
    {
      printf("YES");
    }
  }
  else
  {
    printf("NO");
  }
};