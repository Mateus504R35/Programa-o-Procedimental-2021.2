#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora, minuto, segundo;
};
struct data{
    int dia, mes, ano;
};
struct compromisso{
    struct data d1;
    struct horario h1;
    char texto[10];
}

typedef struct horario horario;
typedef struct data data;
typedef struct compromisso compromisso;

