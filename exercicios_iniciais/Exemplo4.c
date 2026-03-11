#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Ditige 1 para converter de Celsius para Fahrenheit ou digite 2 para converter de Fahrenheit para Celsius\n");

    int n;

    scanf("%d", &n);

    if(n == 1){
        printf("Digite uma temperatura em graus celsius\n");

        scanf("%f", &celsius);

        fahrenheit = (celsius*9/5) + 32;

        printf("%f\n", fahrenheit);
    }
    else if(n == 2){
        printf("Digite uma temperatura em Fahrenheit\n");

        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * (5.0/9.0);

        printf("%f\n", celsius);
    }
    else{
        printf("Digite o número 1 ou 2\n");
    }
    
    return 0;
}
