#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for (int i = n;count<6; i++)
    {
       if(i%2!=0){
        count++;
       
        printf("%d\n",i);
       }
    }
     
    return 0;
}