 #include <stdio.h>


 int main(){
    int notes, nota;

    scanf("%d", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes/100);
     nota = (notes%100);


    printf("%d nota(s) de R$ 50,00\n", nota/50);
    nota = (nota%50);

    printf("%d nota(s) de R$ 20,00\n", nota/20);                                                                                                                        
    nota = (nota%20);

    printf("%d nota(s) de R$ 10,00\n", nota/10);
    nota = (nota%10);

    printf("%d nota(s) de R$ 5,00\n", nota/5);
    nota = (nota%5);

    printf("%d nota(s) de R$ 2,00\n", nota/2);
    nota = (nota%2);

    printf("%d nota(s) de R$ 1,00\n", nota/1);
    return 0;
 }