#include <stdio.h>

int main() {
    int num1, num2, multi, soma;
    float div, sub;

    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite outro numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;
    multi = num1 * num2;
    div = (float) num1 / num2;
    sub = (float) num1 - num2;

    printf("Soma: %d \n", soma);
    printf("Sub: %.2f \n", sub);
    printf("Multi: %d \n", multi);
    printf("Div: %.2f \n", div);

    return 0;
}
