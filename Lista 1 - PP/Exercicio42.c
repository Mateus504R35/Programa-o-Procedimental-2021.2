#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 42
{
    float sb, sr, imp;
    printf("Escreva o salário base de um funcionário: ");
    scanf("%f", &sb);
    imp = sb*0.07;
    sr = (sb + (sb*0.05)) - imp;
    printf("O salário a receber pelo funcionário com o imposto sobre o salário base é: %f", sr);

    return 0;
}
