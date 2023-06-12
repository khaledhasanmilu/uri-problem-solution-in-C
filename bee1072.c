#include<stdio.h>
int main()
{
int a,in=0,out=0;
int x;
scanf("%d",&x);
for(int i=0;i<x;i++){
    scanf("%d",&a);
    if(a >= 10 && a <= 20){
        in++;
    }
    else{
        out++;
    }
}
printf("%d in\n",in);
printf("%d out\n",out);
return 0;
}