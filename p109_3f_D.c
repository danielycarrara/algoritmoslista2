#include<stdio.h>
int main()
{
    int A, B, C,D;
    scanf("%i %i %i",&A,&B,&C);
    if(A>B)
    {
         D = A;
         A = B;
         B = D;   
    }
    if(B>C)
    {
        D = B;
        B = C;
        C = D;
    }
    if(A>B)
    {
         D = A;
         A = B;
         B = D;   
    }
    printf("%i %i %i", A,B,C);
}