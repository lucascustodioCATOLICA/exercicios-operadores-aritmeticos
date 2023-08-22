#include <stdio.h>

int main() {
    float salario, reajuste, novo_salario;

    printf("Qual seu salario: ");
    scanf("%f", &salario);
    printf("qual o percentual do reajuste: %");
    scanf("%f", &reajuste);

    novo_salario = salario * (1 + reajuste/100);

    printf("Novo salario: %.2f", novo_salario);

    return 0;
}
