//1) Escribir un programa en C que dado dos números enteros realice la suma, resta, multiplicación, división entera y resto de los mismos. Los numero son: X = 132 e Y = 34.

#include <stdio.h>

int main(void) 
{
	int x=132, y=34;
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

//Errores encontrados: La nomenclatura de x en la linea 7
//era mayuscula y la nomenclatura de y era mayuscula en la linea 12. Se corrigio el nombre de la variable ree a res, esta se encontraba en la linea 12, 15 y 18.
// Se realizo cambio de nombre de variables a las operaciones
//Cambio de letra de s a d
