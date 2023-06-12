// #include<stdio.h>
// int main()
// {
// int N;
// scanf("%d",&N);
// for(int i=1;i<=10;i++){
//     printf("%d x %d = %d\n",i,N,i*N);
// }
// return 0;
// }
#include<stdio.h>

int main()
{
    int i,j = 0,p,arr[100];
    for (i = 0;i < 100;i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < 100;i++){
            if(arr[i] > j){
                j = arr[i];
                p = i+1;
            }
    }
    printf("%d\n", j);
    printf("%d\n", p);

    return 0;
}