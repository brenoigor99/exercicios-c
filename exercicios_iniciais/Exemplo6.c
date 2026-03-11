#include <stdio.h>

int main()
{
    int n, divisor = 0;

    scanf("%d", &n);

    if(n <= 1){
        printf("Não é primo\n");
    }
    else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                divisor = 1;
                break;
            }
        }
    }

    if(divisor == 0){
        printf("Número primo.\n");
    }
    else{
        printf("Não é primo.\n");
    }

    return 0;
}
