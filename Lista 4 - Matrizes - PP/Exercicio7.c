#include <stdio.h>
#include <stdlib.h>

int main ()     // exercicio 7
{
   int a[2][2], b[2][2], i, j, x;
   char c;
   printf("escreva 4 valores: \n");

   for(i = 0; i < 2; i++)
   {
       for(j = 0; j < 2; j++)
       {
           scanf("%d", &a[i][j]);
       }
   }
   
   printf("escreva 4 valores: \n");
   for(i = 0; i < 2; i++)
   {
       for(j = 0; j < 2; j++)
       {
           scanf("%d", &b[i][j]);
       }
   }

    fflush(stdin);

   printf("Opcoes: \n");
   printf("(a) - somar as duas matrizes \n");
   printf("(b) - subtrair a primeira matriz da segunda  \n");
   printf("(c) - adicionar uma constante as duas matrizes \n");
   printf("(d) - imprimir as matrizes \n");
   c = getchar();

    switch (c)
    {
    case 'a':
        for ( i = 0; i < 2; i++)
        {
            for( j = 0; j < 2; j ++)
            {
                a[i][j] += b[i][j];
                printf("%d\n", a[i][j]);
            }
        }    
        break;
    case 'b':
        for ( i = 0; i < 2; i++)
        {
            for( j = 0; j < 2; j ++)
            {
                a[i][j] -= b[i][j];
                printf("%d\n", a[i][j]);
            }
        }  
        break;
    case 'c':
        printf("escreva uma constante: \n");
        scanf("%d", &x);
        for ( i = 0; i < 2; i++)
        {
            for( j = 0; j < 2; j ++)
            {
                a[i][j] *= x;
                b[i][j] *= x;
                printf("%d %d\n", a[i][j], b[i][j]);
            }
        }  
        break;
    case 'd':
        for ( i = 0; i < 2; i++)
        {
            for( j = 0; j < 2; j ++)
            {
                printf("%d %d\n", a[i][j], b[i][j]);
            }
        }  
        break;
    
    default:    printf("erro, escolha uma opcao valida");
        break;
    }



    return 0;
}