#include<stdio.h>

int main()
{
    int a,b,c,d;
        scanf("%i",&a);
        scanf("%i",&b);
        scanf("%i",&c);
        scanf("%i",&d);
        if(a<= 0 || b<=0 || c<=0 || d<=0)
        {
            printf("invalido\n");

        }

        else {

            if(a==b && a==c && a==d && b==c && b==d && c==d)
            {
                printf("e um quadrado\n");
            }
            if (a==b && a!=c && d==c && b!=c && a!=d && b!=d)
            {
                printf("e um retangulo\n");
            }
            if(a==b && a!=c && a!=d && b!=c && b!=d && c!=d||a!=b && a!=c && a!=d && b!=c && b!=d && c==d)
            {
                printf("e um trapezio\n");
            }
            if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            {
                printf("invalido\n");

            }   
            }

}