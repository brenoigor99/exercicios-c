#include <stdio.h>

int main()
{
    int fat = 1;
    int N;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        fat *= i;
        printf("%d x %d = %d\n", N, i, fat);
    }
    
    printf("\nResultado final: %d! = %d\n", N, fat);
    return 0;
}
