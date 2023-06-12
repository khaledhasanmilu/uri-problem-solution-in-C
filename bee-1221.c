#include <stdio.h>
int main()
{
    int num, count = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if(num==3)
    {
        printf("Not prime\n");
    }
    else if (count == 2)
    {
        printf("Prime\n");
    }
       else
    {
        printf("Not prime\n");
    }

    return 0;
}