// #include<stdio.h>
// int main()
// {
// int a,b,c,d,e;
// scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
// int count=0;
// if(a%2==0){
// count++;
// }
// if(b%2==0){
// count++;
// }
// if(c%2==0){
// count++;
// }
// if(d%2==0){
// count++;
// }
// if(e%2==0){
// count++;
// }
// printf("%d valores pares",count);
// return 0;
// }
#include<stdio.h>
int main()
{
    int num,count=0;
for(int i=0;i<5;i++){
    scanf("%d",&num);
    if(num%2==0){
        count++;
    }
}
printf("%d valores pares\n",count);
return 0;
}