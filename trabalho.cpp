#include <stdio.h>
void conversorkelvin(float celsius){
    float kelvin;
    kelvin = celsius + 273.15;
    printf("\n\nValor da conversao de %.2f graus Celsius em kelvin: %.2f", celsius, kelvin);
}
int main(){
    float celsius, fahrenheit, kelvin;
    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("--------------------------------");
    printf("\nValor da conversao de %.2f graus Celsius em fahrenheit: %.2f", celsius, fahrenheit);
    conversorkelvin(celsius);
}
