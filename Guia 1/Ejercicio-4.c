//Realizar un algoritmo que verifique si un numero ingresado por el usuario es par o impar

#include <stdio.h>

int main() {
  int numero;
	printf("Ingrese un valor entero:\n");
	scanf("%d", &numero);
	if (numero % 2 == 0)
		printf("El numero es par\n");
	else
		printf("El numero es impar\n");
	return 0;
}

//Se agrego otro igual en la linea 9