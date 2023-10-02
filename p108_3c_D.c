#include<stdio.h>
float main()
{
    float Md, N1, N2, N3, N4;
    scanf("%f %f %f %f", &N1,&N2,&N3,&N4);
    Md = (N1+N2+N3+N4)/4;
    if (Md >= 5)
    {
        printf("aprovado");
    }
    else
    {
        printf("reprovado");
    }
}