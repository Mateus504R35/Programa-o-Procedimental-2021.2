#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 50, *p1;
    float b = 10.5, *p2;
    char c = 'R', *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Antes da modificacao: %d %.2f %c \n", a, b, c);

    *p1 = *p1 + 2;
    *p2 = *p2 + 52.4;
    *p3 = *p3 + 2;

    printf("Depois da modificac�o: %d %.2f %c \n", *p1, *p2, *p3);

    return 0;
}