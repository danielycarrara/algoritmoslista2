#include<stdio.h>
#include<math.h>
float main()
{
    float a, b, c, x, x2, d;
    scanf("%f %f %f",&a, &b, &c);
    d = pow(b,2)-(4*a*c);
    if(d<0)
    {
         printf("nao possui solucoes reais");   
    }
    if(d>0)
    {
          printf("%f ",d);
          x = (-b+ sqrt(d))/(2*a);
          printf("%f",x);
          x2 = (-b- sqrt(d))/(2*a);
          printf(" %f",x2);   
    }
}