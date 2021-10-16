/*  Dado el algoritmo anterior realizar una función para la carga y otra función para mostrar el arreglo por pantalla.  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void cargar(int a[]){
	int i;
	srand(time(NULL));
	for (i = 1; i < 11; i++) {
		printf("Ingrese un numero para la posición %d: ", i);
		scanf("%d", &a[i]);
	}
}
 
void mostrar(int a[]){
	int i;
	for (i = 1; i < 11; i++) {
		printf("Posicion %d, esta el numero: %d\n", i, a[i]);
	}
}
 
int main()
{
	int a[10];
	cargar(a);
	mostrar(a);
	return 0;
}
