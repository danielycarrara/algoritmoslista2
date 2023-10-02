#include<stdio.h>
float main()
{
    float Md1, Md2, N1, N2, N3, N4, N5;
    scanf("%f %f %f %f", &N1,&N2,&N3,&N4);
    Md1 = (N1+N2+N3+N4)/4;
    printf("%f\n",Md1);
    if (Md1 >= 7)
    {
        printf("aprovado");
    }
    else
    {
        scanf("%f",&N5);
        Md2= (Md1+N5)/2;
        if(Md2 >= 5)
        {
            printf("aprovado por exame");
        }
        else
        {
            printf("reprovado");
        }
    }
}