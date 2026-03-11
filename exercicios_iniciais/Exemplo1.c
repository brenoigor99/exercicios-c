#include <stdio.h>

//Impressão de números de 1 a N
int main()
{
    int N;

    scanf("%d", &N);

    for(int i = 0; i <= N; i++){
        printf("%d\n", i);
    }
    
    return 0;
}