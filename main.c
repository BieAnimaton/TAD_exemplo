#include <stdio.h>
#include <stdlib.h>
#include "tad_header.h"

int main()
{
    Data d1, d2;

    d1.dia = 18;
    d1.mes = 2;
    d1.ano = 2002;

    printf("Data original:\n");
    printf("%d/%d/%d\n", d1.dia, d1.mes, d1.ano);

    incrementa_tempo(d1, &d2);

    printf("\nData alterada:\n");
    printf("%d/%d/%d\n", d2.dia, d2.mes, d2.ano);

    return 0;
}
