#include <stdio.h>
#include <math.h>

int main() {
    int raio;
    float area;

    printf("Informe o raio do circulo: ");
    scanf("%d", &raio);

    area = raio * raio * M_PI;

    printf("A area eh %.2f", area);

    return 0;
}
