//1) Realizar un algoritmo que cargue un arreglo de 10 enteros y lo muestre por pantalla
 
#include <stdio.h>
 
int main()
{
	int a[10], i, val;
	for (i = 1; i <= 10; i++){
		printf("Ingrese un numero para la posición %d: ", i);
		scanf("%d", &a[i]);
	}
	for (i = 1; i < 10; i++){
		printf("Posicion %d, esta el numero: %d\n", i, a[i]);
	}
	return 0;
}
