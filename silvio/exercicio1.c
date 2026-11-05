#include <stdio.h>

int main(void)
{
    const float precoCaderno = 27.875f;

    printf("Preco original do caderno: R$ %f\n", precoCaderno);
    printf("Preco com duas casas decimais: R$ %.2f\n", precoCaderno);

    return 0;
}
