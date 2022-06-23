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
*/
int main ()     //exercicio 7
{

    return 0;
}



