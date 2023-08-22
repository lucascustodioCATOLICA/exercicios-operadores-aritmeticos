#include <stdio.h>

int main() {
    float custo, frete, outros, venda, lucro;

    printf("Informe o custo da mercadoria: R$");
    scanf("%f", &custo);
    printf("Informe o frete da mercadoria: R$");
    scanf("%f", &frete);
    printf("Informe outras despesas da mercadoria: R$");
    scanf("%f", &outros);
    printf("Informe o preco de venda: R$");
    scanf("%f", &venda);

    lucro = venda - (custo + frete + outros);

    printf("O Lucro eh: R$%.2f", lucro);

    return 0;
}
