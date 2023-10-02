#include<stdio.h>
int main()
{
    int A, B;
    scanf("%i %i", &A, &B);
    if (A>B)
    {
        printf("%i ",A-B); 
    }
    if (B>A)
    {
        printf("%i", B-A);
    }
}