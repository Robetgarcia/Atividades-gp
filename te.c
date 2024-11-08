#include <stdio.h>

int main()
{
    float ce;
    float fa;
    
    printf("programa para calcular temperatura em Fahrenheit\n");
    printf("digite a temperatura:");
    scanf("%f",&ce);
    
    fa=180 *(ce + 32)/ 100;
    
    printf("a temperatura em Fahrenheit é:%f",fa);
    
    return 0;
}



