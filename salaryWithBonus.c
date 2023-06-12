#include<stdio.h>
int main()
{
char name[10];
double fixed_salary,sales_total,TOTAL,parcentage;
gets(name);
scanf("%lf%lf",&fixed_salary,&sales_total);

parcentage = sales_total*0.15;
TOTAL = fixed_salary + parcentage;

printf("TOTAL = R$ %.2lf\n",TOTAL);
return 0;
}