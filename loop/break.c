#include <stdio.h>
int main()
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break; 
        }
        printf("%d\n", i);
    }
    return 0;
}