#include<stdio.h>
int main()
{
int A,B,C,D;
scanf("%d%d%d%d",&A,&B,&C,&D);
int sum1=C+D;
int sum2=A+B;
int a,b,c,d,e;
a=(B>C && D>A);
b=(sum1>sum2);
c=(C>=0 && C<=9);
d=(D>=0 && D<=9);
e=(A%2==0);
if(a && b && c && d && e)
{
    printf("Valores aceitos\n");
}
else
{
    printf("Valores nao aceitos\n");
}
return 0;
}