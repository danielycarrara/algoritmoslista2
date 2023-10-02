#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%i %i", &a, &b);
    c = a - b;
    if(c>=0)
    {
        printf("numero maior ou igual a zero");
    }
    if(c<0)
    {
        printf("numero menor que zero\n");
    }
    printf("%i", c);
}
