#include<stdio.h>
float main()
{
     float a,b,c;
     scanf("%f %f",&a,&b);
     if(a==b)
     {
         printf("e suficiente");
     }
     if(b>a)
     {
         c = b - a;
         printf("e sufiente\n");
         printf("%.2f",c);
     }
}