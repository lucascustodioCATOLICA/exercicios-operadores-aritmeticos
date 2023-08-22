#include <stdio.h>

int main() {
    int anos, meses, dias, total_em_dias;

    printf("Quantos anos: ");
    scanf("%d", &anos);
    printf("Quantos meses: ");
    scanf("%d", &meses);
    printf("Quantos dias: ");
    scanf("%d", &dias);

    total_em_dias = (anos*365) + (meses*30) + dias;

    printf("Total em dias: %d", total_em_dias);

    return 0;
}
