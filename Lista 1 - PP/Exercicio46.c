#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 46
{
    int num, inverso;
    printf("Digite um número positivo de 3 digitos: ");
    scanf("%d", &num);
    printf("Esse é o inverso desse número: \n");
    inverso = num % 10;  
    num /= 10;
    printf("%d", inverso);
    inverso = num % 10;  
    num /= 10;
    printf("%d", inverso);
    inverso = num % 10;  
    num /= 10;
    printf("%d", inverso);


    return 0;
}