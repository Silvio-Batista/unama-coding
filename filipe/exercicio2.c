#include <stdio.h>

int main(void)
{
    const double raizDeDois = 1.41421356237;

    puts("Aproximacoes da raiz quadrada de 2");
    printf("Com duas casas: %.2f\n", raizDeDois);
    printf("Sem casas decimais: %.0f\n", raizDeDois);

    return 0;
}
