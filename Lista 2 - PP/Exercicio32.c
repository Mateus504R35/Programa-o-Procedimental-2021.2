#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 32
{
    float pt, c, p, q;
    char ch;
    printf("escreva o codigo do produto: ");
    scanf("%f", &c);
    printf("agora escreva a quantidade: ");
    scanf("%f", &q);
    ch = c;


    switch (ch)
    {
    case 'd': 
        p = 1.20;
        pt = p * q;
        break;
    case 'e': 
        p = 1.30;
        pt = p * q;
        break;
    case 'f': 
        p = 1.50;
        pt = p * q;
        break;
    case 'g':
        p = 1.20;
        pt = p * q;
        break;
    case 'h': 
        p = 1.70;
        pt = p * q;
        break;
    case 'i': 
        p = 2.20;
        pt = p * q;
        break;
    case 'j': 
        p = 1.00;
        pt = p * q;
        break;    
    }
    printf("O preço a ser pago: %.2f", pt);
    

    return 0;
}