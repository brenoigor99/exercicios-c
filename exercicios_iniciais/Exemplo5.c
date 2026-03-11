#include <stdio.h>

int main()
{
    char nome[50];
    int cont = 0;

    fgets(nome, 50, stdin);

    for(int i = 0; nome[i] != '\0'; i++){
        if(nome[i] != ' '){
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}
