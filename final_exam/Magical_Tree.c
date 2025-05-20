#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int triangle_rows = 6 + (N - 1) / 2;
    int width = 2 * (triangle_rows - 1) + 1;

    for (int i = 0; i < triangle_rows; i++)
    {
        int stars = 2 * i + 1;
        int spaces = (width - stars) / 2;

        for (int j = 0; j < spaces; j++)
            printf(" ");
        for (int j = 0; j < stars; j++)
            printf("*");
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        int spaces = (width - N) / 2;

        for (int j = 0; j < spaces; j++)
            printf(" ");
        for (int j = 0; j < N; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
