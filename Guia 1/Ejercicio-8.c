/* Realice un algoritmo que tome como entrada un número entero mayor o igual a 100 y menor que 1000, 
y muestre por pantalla como esta compuesto (unidad, decena y centena) */

#include <stdio.h>
#include <math.h>


int main(void){
    int valor,unidad = 0,decena = 0,centena = 0;

    printf("Ingrese un numero: \n");
    scanf("%d",&valor);
    if (valor >= 100 && valor <= 1000)
    {
        centena = (valor / 100) * 100;
        decena = ((valor / 10) %10) * 10;
        unidad = valor % 10;
        printf("El numero es %d \n", valor);
        printf(" Su centena es: %d,\n Su decena es: %d,\n Su unidad: %d ", centena ,decena,unidad);
    }
    else{
        printf("Vuelva a ingresar el valor \n");
    }
    

    return 0;
}