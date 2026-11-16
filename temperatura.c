#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float F = (temperatura*9/5)+32;
	printf("Temperatura: %d graus\nFahrenheit: %.1f\n", temperatura, F);
	return 0;
}
