#include <stdio.h>

int main()
{
    int numeros[5];

    int soma = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("Soma: %d\n", soma);

    return 0;
}
