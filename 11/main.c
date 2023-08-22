#include <stdio.h>

int main() {
    float salario, total_das_vendas, comissao, total;
    int num_carros_vendidos;
    
    printf("Informe seu salario: R$");
    scanf("%f", &salario);
    printf("Informe o numero de carros vendidos: ");
    scanf("%d", &num_carros_vendidos);
    printf("Informe o total das vendas: R$");
    scanf("%f", &total_das_vendas);
    printf("Informe a comissao: R$");
    scanf("%f", &comissao);
    
    total = salario + (num_carros_vendidos * comissao) + (total_das_vendas * 0.05);

    printf("SALARIO FINAL: %.2f", total);

    return 0;
}
