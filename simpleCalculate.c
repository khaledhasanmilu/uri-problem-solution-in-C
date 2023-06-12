#include<stdio.h>
int main()
{
int code_of_product1,quantity1,code_of_product2,quantity2;
double price1,price2;
float VALOR_A_PAGAR;
scanf("%d%d%lf",&code_of_product1,&quantity1,&price1);
scanf("%d%d%lf",&code_of_product2,&quantity2,&price2);

VALOR_A_PAGAR=((quantity1*price1)+(quantity2*price2));

printf("VALOR A PAGAR: R$ %.2f\n",VALOR_A_PAGAR);

return 0;
}