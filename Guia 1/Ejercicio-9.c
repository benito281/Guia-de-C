/* Genere un programa que determine cuál es el factorial de un número N dado utilizando solo las funciones multiplicación, suma y resta. 
(El factorial se compone por la multiplicación de todos los números de 1 hasta N,
 ej: factorial de 5 es 5 * 4 * 3 * 2 * 1) */


 #include <stdio.h>
 #include <math.h>

 int main(){
     int i, valor, suma = 0,resta = 0,mult = 0,division = 0;
     printf("Ingrese un numero: \n");
     scanf("%d",&valor);
     if (valor <= 0)
     {
         printf("Vuelva a ingresar otro numero \n");
     }
     else
     {
         //printf("Chidori :) \n");
        //i = valor;
        i = 1;
        mult = 1; 
        do
         {
            printf("El valor de i es: %d\n",i);
            mult = mult * i;
            i = i + 1;
        } while (i > valor);
        
        printf("El factorial de %d es: %d\n",valor,mult);
         
     }
     
 }