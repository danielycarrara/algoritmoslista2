#include<stdio.h>
#include<math.h>
float main()
{
    float A,M,IMC;
    scanf("%f %f",&A,&M);
    IMC= M/pow(A,2);
    if((18.5>=IMC)&&(IMC<25))
    {
        printf("normal");
    }
    else if((25<=IMC)&&(IMC<30))
    {
        printf("sobrepeso");
    }
    else if((30<=IMC)&&(IMC<35))
    {
        printf("sobrepeso grau 1");
    }
    else
    {
        printf("sobrepeso grau 2");
    }
}