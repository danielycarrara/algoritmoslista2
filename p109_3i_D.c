#include<stdio.h>
float main()
{
    int a,b,c,d,e,maior,menor;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    scanf("%i",&d);
    scanf("%i",&e);
    maior = a;
    menor = a;
    if(b>maior)
    {
        maior = b;
    }
    else if (b<menor)
    {
        menor = b;
    }
    if(c>maior)
    {
        maior = c;
    }
    else if (c<menor)
    {
        menor = c;
    }
    if(d>maior)
    {
        maior = d;
    }
    else if (d<menor)
    {
        menor = d;
    }
    if(e>maior)
    {
        maior = e;
    }
    else if (e<menor)
    {
        menor = e;
    }
    printf("%i\n", maior);
    printf("%i",menor);
}