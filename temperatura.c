#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float F = (temperatura*9/5)+32;
	printf("Temperatura: %d graus\nFahrenheit: %.1f\n", temperatura, F);
	if ( temperatura >= 20) {
		printf("Temperatura: %d graus\nTemperatura alta\n", temperatura);
	} else {
		printf("Temperatura: %d graus\nTemperatura baixa\n", temperatura);
	}
	return 0;
}
