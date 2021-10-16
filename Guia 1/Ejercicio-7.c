/* Realice un algoritmo que identifique que un numero es palindromo (un número palíndromo es cuando el número y su inverso son iguales, ej: 3223) */

#include <stdio.h>

int main(){
int n, inv = 0;
int val = 0;
	printf("Ingrese un numero: \n");
	scanf("%d", &n);
  val = n;
	while (n != 0)
	{
		inv = inv * 10;
		inv = inv + n%10;
		n = n/10;
	}
  if (val == inv){
    printf("El numero es palindromo \n");
  }
  else{
    printf("El numero no es palindromo \n");
  }

	return 0;
}
