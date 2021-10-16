//Idem al anterior, pero ahora el usuario ingresa qué operación desea realizar.

#include <stdio.h>

int main(void) 
{
	int x, y, ope;
	printf("Ingrese el valor de x: ");
	scanf("%d", &x);
	printf("Ingrese el valor de y: ");
	scanf("%d", &y);
	printf("Ahora qué operación queres hacer:\n ");
  printf("Ingrese un numero para calcular:\n ");
  printf("1 suma, 2 resta, 3 multiplicación, 4 división y 5 el resto de ambos numeros: ");
	scanf("%d", &ope);
 
	int resu;
	switch (ope) {
		case 1: resu = x + y;
        break;
		case 2: resu = x - y;
				break;
		case 3: resu = x * y;
				break;
		case 4: resu = x / y;
				break;
		case 5: resu = x % y;
				break;
	}
	printf("Resultado de la operación %d es: %d\n", ope, resu);
	
	return 0;
}

//Se agrego un break en la linea 20 y se agrego el simbolo & detras de la variable ope e la linea 153