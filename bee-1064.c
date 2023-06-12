#include <stdio.h>
int main()
{
    float avg=0;
    float arr[100], num;
    // scanf("%f", &num);
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &arr[i]);
    }
    float count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] >= 0)
        {
            count++;
            avg=avg+arr[i];
        }
        
    }

    printf("%.0f valores positivos\n", count);

    printf("%0.1f", avg/count);
    return 0;
}