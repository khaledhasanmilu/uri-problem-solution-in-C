#include <stdio.h>
int main()
{
    float arr[100], num;
    scanf("%f", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%f", &arr[i]);
    }
    float count = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= 0)
        {
            count++;
        }
    }
    printf("%.0f valores positivos\n", count);
    return 0;
}