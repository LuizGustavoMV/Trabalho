#include <stdio.h>
int main()
{
    float celsius, kelvin;
    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("\nValor da conversao de %.2f graus celsius em kelvin: %.2f", celsius, kelvin);
}
