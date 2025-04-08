#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("burger khabo \n");
        if (tk >= 200)
        {
            printf("burger o fucka na \n");
        }
    }
    else if (tk >= 50)
    {
        printf("burger khabo na \n");
    }
    else
    {
        printf("kisui khabona na \n");
    }
}