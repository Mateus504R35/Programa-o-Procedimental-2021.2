#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main()      // exercicio 1
{
   char str[10];
   gets(str);
   printf("%s", str);

   return 0;
}

int main ()     //exercicio 2
{
    int a, i;
    a = 0;
    char c = '1';
    char str[10];
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == c)
        a++;
    }
    printf("%d", a);

    return 0;
}

int main ()     //exercicio 3
{
    int i, len;
    char str[10], aux;
    gets(str);

    for(i = 0, len = strlen(str) - 1; i < len; i++, len --)
    {
        aux = str[i];
        str[i] = str[len];
        str[len] = aux;
    }
    printf("%s", str);

    return 0;
}

int main ()     //exercicio 4
{
    char palavra[10], v;
    int a = 0, e = 0, i = 0, o = 0, u = 0, count;
    gets(palavra);
    printf("digite um caractere: ");
    v = getchar();

    for(count = 0; palavra[count] != '\0'; count++)
    {
        if (palavra[count] == 'a')
        a++;
        if (palavra[count] == 'e')
        e++;
        if (palavra[count] == 'i')
        i++;
        if (palavra[count] == 'o')
        o++;
        if (palavra[count] == 'u')
        u++;
    }
    printf("Essa palavra possui %d vogais a, %d vogais e, %d vogais i, %d vogais o, %d vogais u \n", a, e, i, o, u);

    for(count = 0; palavra[count] != '\0'; count++)
    {
        if((palavra[count] == 'a')||(palavra[count] == 'e')||(palavra[count] == 'i')||(palavra[count] == 'o')||(palavra[count] == 'u'))
        palavra[count] = v;
    }
    printf("%s", palavra);

    return 0;
}

int main ()         // exercicio 5
{
    int i;
    char palavra[10];
    printf("escreva uma palavra em maiusculo: ");
    gets(palavra);

    for(i = 0; palavra [i] != '\0'; i++)
        palavra[i] += 32;

    printf("%s", palavra);


    return 0;
}

int main ()         // exercicio 6
{
    int i;
    char palavra[10];
    printf("escreva uma palavra em minusculo: ");
    gets(palavra);

    for(i = 0; palavra [i] != '\0'; i++)
        palavra[i] -= 32;

    printf("%s", palavra);


    return 0;
}

int main ()     //exercicio 7
{
    char palavra[10];
    int i;
    printf("Escreva uma palavra: ");
    gets(palavra);

    for (i = 0; palavra[i] != '\0'; i++)
    {
        if(palavra[i] == ' ')
        palavra[i] = '.';
    }
    printf("%s", palavra);

    return 0;
}

int main ()     //exercicio 8
{
    char l1, l2, palavra[10];
    int i;
    printf("Escreva uma palavra: ");
    gets(palavra);
    fflush(stdin);
    printf("Agora escreva duas letras: ");
    scanf("%c %c", &l1, &l2);

    for(i = 0; palavra[i] != '\0'; i++)
    {
        if(palavra[i] == l1)
        palavra[i] = l2;
    }
    printf("%s", palavra);

    return 0;
}

int main ()     //exercicio 9
{
    char mercadoria[10];
    int valor, desconto, total;
    printf("Escreva o nome da mercadoria:  ");
    gets(mercadoria);
    fflush(stdin);
    printf("Agora escreva o valor da mercadoria: ");
    scanf("%d", &valor);

    desconto = valor*0.10;
    total = valor - desconto;

    printf("O valor total da mercadoria %d - O valor do desconto %d - Para o produto %s ", total, desconto, mercadoria);

    return 0;
}

int main ()     //exercicio 10
{
    char string[15];
    int i, j, cont, len;
    gets(string);
    printf("Escreva dois inteiros nao negativos: ");
    fflush(stdin);
    scanf("%d %d", &i, &j);

    for(cont = 0, len = strlen(string); cont <= len; cont ++)
    {
        if(cont == 0)
        string[cont] = i;
        if(cont == len)
        string [cont] = j;
    }
    printf("%s", string);


    return 0;
}
int main ()     //exercicio 11
{  
    char palavra[20];
    int i;
    printf("Escreva um texto pequeno: ");
    gets(palavra);

    for(i = 0; palavra[i] != '\0'; i++)
    {
        if(palavra[i] != ' ')
        palavra[i] += 3;
    }   
    printf("%s", palavra);

    return 0;
}
int main ()     //exercicio 12
{  
    char palavra[10];
    int i, j, pali;
    gets(palavra);

    for( i = 0, j = strlen(palavra) - 1; i < j; i++, j--)
    {
        if(palavra[i] != palavra[j])
            break;
        else
        pali = 1;
    }
    if(pali == 1)
    printf("%s eh palindromo", palavra);
    else
    printf("%s nao eh palindromo", palavra);

    return 0;
}

int main ()     //exercicio 13
{  
    int n, i;
    char str, str1[30], str2[10];
    printf("Escreva duas palavras:\n");
    gets(str1);
    fflush(stdin);
    gets(str2);
    fflush(stdin);
    printf("Agora escreva um valor positivo: ");
    scanf("%d", &n);

    for(i = 0; str1[i] != str1[n]; i++)
    {
       char str = strcat(str1, str2);
    }
    printf("%s", str1);

    return 0;
}
*/

