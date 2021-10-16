//Realice un programa en c que dado un número entero, imprima por pantalla el número ingresado y su inverso (con sus dígitos al revés), ej: 1234, imprime 4321.

#include <stdio.h>

int main()
{
	int n, inv = 0, val = 0;
	printf("Ingrese un numero: \n");
	scanf("%d", &n);
  val = n;
	while (n != 0)
	{
		inv = inv * 10;
		inv = inv + n%10;
		n = n/10;
	}
	printf("El numero ingresado es: %d, su inverso es: %d\n", val, inv);
	return 0;
}

//Linea 12 se elimino el : que estaba detras del igual
//Linea 18 se agrego el } para cerrar la función
// Se agrego la variable val para asignar el valor de n

