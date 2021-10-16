#include <stdio.h>

int main(void) {
  int numero;
  int resultado;
	printf("Ingrese un valor entero:\n");
	scanf("%d", &numero);
    resultado = (numero % 2 == 0) ? printf("El numero es par\n") : printf("El numero es impar\n");
	return 0;
}