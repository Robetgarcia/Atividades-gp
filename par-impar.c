#include <stdio.h>

int main()
{
    int valor;
    printf("Coloque um valor:\n");
    scanf("%d", &valor);

    if ( valor % 2 == 0 )
    {
        printf("%d é par", valor);
    }
    
    else
    {
        printf("%d é impar", valor);
    }
}