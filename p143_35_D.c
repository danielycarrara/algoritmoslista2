#include<stdio.h>
float main()
{
     float n;
     scanf("%f",&n);
     if(n>=9)
     {
         printf("A");
     }
     if((n>=7)&&(n<9))
     {
         printf("B");
     }
     if((n>=5)&&(n<7))
     {
         printf("C");
     }
     if((n>=3.5)&&(n<5))
     {
          printf("D");   
     }
     if(n<3.5)
     {
          printf("E");   
     }
}