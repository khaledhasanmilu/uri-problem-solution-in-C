#include <stdio.h>
int main()
{
    double R;
    double VOLUME;
    scanf("%lf",&R);
    VOLUME = (4/3.0)*3.14159 * R * R * R;
    printf("VOLUME = %.3lf\n", VOLUME);
    return 0;
}