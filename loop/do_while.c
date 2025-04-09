#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        if (i == 3)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    while (i < 20);
}