#include<stdio.h>
int main()
{
    int N;
    scanf("%i", &N);
    if (N<0)
    {
        printf("%i ",N*(-1)); 
    }
    else
    {
        printf("%i",N);
    }
}