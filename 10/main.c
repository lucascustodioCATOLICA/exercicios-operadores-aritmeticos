#include <stdio.h>

int main() {
    float custo, total;
    const int DISTRIBUIDOR = 28;
    const int IMPOSTO = 45;
    
    printf("Qual o custo inicial do carro: R$");
    scanf("%f", &custo);
    
    total = custo + (custo*DISTRIBUIDOR/100) + (custo*IMPOSTO/100);

    printf("CUSTO TOTAL: %.2f", total);

    return 0;
}
