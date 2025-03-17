#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Valor da conversao de %.2f graus Celsius em fahrenheit: %.2f", celsius, fahrenheit);
}

