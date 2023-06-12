#include <stdio.h>
int main()
{
    int num;
    int hours,minutes,seconds;

    scanf("%d", &num);
hours=(num/3600);
minutes=(num-(hours*3600))/60;
seconds=(num- (hours*3600)-(minutes*60));

printf("%d:%d:%d\n",hours,minutes,seconds);

    return 0;
}