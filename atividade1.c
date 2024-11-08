#include <stdio.h>

int main()
{
 int valor [3];
 int i;
    for(i=0; i<3; i++)
    {
    printf("Coloque um valor:\n");
    scanf("%d",&valor [i]);
    }
    
    for(i=0; i<3; i++)
    {
    if (valor > 0)
    {
        printf("%d numero é maior que zero.", valor [i]);
    }
    
    else if ((valor < 0))
    {
        printf("%d numero é menor que zero.", valor [i]);
    }

    else if ((valor == 0))
    {
        printf("%d numero é igual que zero.", valor [i]);
    }
    }
}
