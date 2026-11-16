#include <stdio.h>

int main(void) {
	int temperatura = 25;
	if ( temperatura >= 20) {
		printf("Temperatura: %d graus\nTemperatura alta\n", temperatura);
	} else {
		printf("Temperatura: %d graus\nTemperatura baixa\n", temperatura);
	}
	return 0;
}
