#include <stdio.h>

int main() {
    int num1, num2, area;

    printf("Informe a largura da sala: \n");
    scanf("%d", &num1);
    printf("Informe a comprimento da sala: \n");
    scanf("%d", &num2);
    
    area = num1 * num2;
    printf("AREA: %d \n", area);

    return 0;
}
