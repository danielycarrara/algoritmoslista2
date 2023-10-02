#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%i",&x);
    if ((x>=1)&&(x<=9))
    {
        printf("esta na faixa permitida");
    }
    else
    {
        printf("nao esta na faixa permitida");
    }
}