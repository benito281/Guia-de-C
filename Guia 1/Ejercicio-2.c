// Idem al ejercicio anterior, pero ahora X como Y deben ser ingresados por el usuario
#include <stdio.h>

int main(void) 
{
	int x, y;
	printf("Ingrese el valor de x: ");
	scanf("%dn", &x);
	
	printf("Ingrese el valor de y: ");
	scanf("%d", &y);
	
	int suma = x + y;
	int resta = x - y;
	int multiplicacion = x * y;
  int division = x / y;
	int resto = x % y;
 
	printf("Resultado de la Suma es: %d\n", suma);
	printf("Resultado de la Resta es: %d\n", resta);
	printf("Resultado de la Multiplicación es: %d\n", multiplicacion);
	printf("Resultado de la División entera es: %d\n", division);
	printf("Resultado de la Resto de la División entera es: %d\n", resto);
	
	return 0;
}

//Se modigicao la letra s por la d en la linea 20, se cambio el nombre de las variables y se cambio la variable X masyuscula en la linea 6 por minuscula, lo mismo se aplico en la linea 17 para la Y
