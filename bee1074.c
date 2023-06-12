#include <stdio.h>
int main()
{
    int N, y;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &y);
        if (y == 0)
            printf("NULL\n");
        else if (y <= 0 && y % 2 == 0)
            printf("EVEN NEGATIVE\n");
        else if (y >= 0 && y % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (y >= 0 && y % 2 == 1)
            printf("ODD POSITIVE\n");
             else if(y<=0&&y%2==-1)
            printf ("ODD NEGATIVE\n");
    }
    return 0;
}