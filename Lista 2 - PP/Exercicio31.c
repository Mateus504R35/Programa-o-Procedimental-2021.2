#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () // exercicio 31
{
    int h, p;
    printf("escreva a altura e o peso, respectivamente: ");
    scanf("%d %d", &h, &p);

    if ((h < 1.20) && (p <= 60))
    {
        printf("A");
    }
    else
    {
        if (((h >= 1.20) && (h <= 1.70)) && (p <= 60))
        {
            printf("B");
        }
        else
        {
            if (((h > 1.70)) && (p <= 60))
            {
                printf("C");
            }
            else
            {
                if (((h < 1.20)) && ((p >= 60) && (p <= 90)))
                {
                    printf("D");
                }
                else
                {
                    if (((h >= 1.20) && (h <= 1.70)) && ((p >= 60) && (p <= 90)))
                    {
                        printf("E");
                    }
                    else
                    {
                        if ((h > 1.70) && ((p >= 60) && (p <= 90)))
                        {
                            printf("F");
                        }
                        else
                        {
                            if ((h < 1.20) && (p > 90))
                            {
                                printf("G");
                            }
                            else
                            {
                                if (((h >= 1.20) && (h <= 1.70)) && (p > 90))
                                {
                                    printf("H");
                                }
                                else
                                {
                                    printf("I");
                                }
                            }
                        }  
                    }
                }
            }
        }
    }


    return 0; 
}