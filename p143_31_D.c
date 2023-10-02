#include <stdio.h>
int main()
{
    float N1, N2, N3, Md;
    scanf("%f",&N1);
    scanf("%f",&N2);
    scanf("%f",&N3);
    Md = (N1 * 2 + N2 * 3 + N3 * 5)/ (2 + 3 + 5);
    printf("%.2f", Md);
    if( Md >= 7.0)
    {
        printf("\naprovado\n");
    }
    else
    {
        printf("\nreprovado\n");
    }
}