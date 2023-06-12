#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = n+1; i <=n+6; i+2)
    {
        // if (i % 2 != 0)
        
            printf("%d\n", i);
        
    }
    return 0;
}