    //Realice un programa que dado un número entero, devuelva la suma de todos sus dígitos

#include <stdio.h>
#include <math.h>

int main() {
int ent, aux, sum;
	printf("Ingrese un entero: \n");
	scanf("%d", &ent);
	aux = ent;
	sum = 0;
/* while (aux != 0)	{
  if(aux > 10){
		sum = sum + aux % 10;
  }
  else{
    sum = sum + aux;
  }
  	aux = aux / 10;
	} */
/*     while (aux > 10)	{
      sum = sum + aux % 10;
      aux = aux / 10;
	}
    sum = sum + aux;
 */
 /* while (aux > 0)	{
   sum = sum + aux % 10;
   aux = round(aux / 10);
	} */
  while (aux != 0)	{
		sum = sum + aux % 10;
		aux = aux / 10;
	}
  
	printf("La suma de los dígitos de %d es: %d\n", ent, sum);
	return 0;

}
//Formateo mal hecho       