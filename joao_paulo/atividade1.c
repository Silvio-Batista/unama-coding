int main()
{
    double preco;
    double desconto = 0.10;   // 10%
    double final;

    printf("Digite o preco: ");
    scanf("%lf", &preco);     // double no scanf usa %lf

    final = preco * (1 - desconto);

    // Comparando os formatos
    printf("\nSem formatar:      %f\n", preco);
    printf("Com 2 casas:       %.2f\n", preco);

    // Resultado com desconto
    printf("\nPreco original:    R$ %.2f\n", preco);
    printf("Desconto:          %.0f%%\n", desconto * 100);
    printf("Preco com desconto: R$ %.2f\n", final);

    return 0;
}