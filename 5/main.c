#include <stdio.h>

int main() {
    float num1, real_para_dolar;
    const float DOLAR = 4.98f;

    printf("Informe o valor em Reais: R$");
    scanf("%f", &num1);
    
    real_para_dolar = num1 * DOLAR;
    printf("Valor em Dolar: %.2f \n", real_para_dolar);

    return 0;
}
