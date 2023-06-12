#include<stdio.h>
int main()
{
int num,workHour;
float amount,SALARY;
scanf("%d%d%f",&num,&workHour,&amount);
SALARY=workHour*amount;
printf("NUMBER = %d\n",num);
printf("SALARY = U$ %.2f\n",SALARY);
return 0;
}