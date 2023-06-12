#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double d, e, f, g, h, R1, R2;

    d = ((b * b) - (4 * a * c));
    e = sqrt((b * b) - (4 * a * c));
    R1 = (((-b) + e) / (2 * a));
    R2 = (((-b) - e) / (2 * a));
    if (a == 0 || d < 0)
    {
        printf("Impossivel calcular\n");
    }
    else if (R1 && R2)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    return 0;
}