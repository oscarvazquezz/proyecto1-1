/* Programa: Hola mundo */

#include <conio.h>
#include <stdio.h>

int main()
{

int a,b,resultado,resultado2;

   printf( " Hola mundo \n" );
   printf( " este es mi primer programa en c\n" );
   printf( " la suma de dos numeros A y B\n" );
    printf( "dame el primer valor para A = " );//primera rama prueva 1
    scanf("%d", &a);
     printf( "dame el segundo valor para B = " );//primera rama prueva 1
     scanf("%d", &b);
     resultado=a+b; //segunda rama prueva 2
     	printf("Tu suma es: %d",resultado); //segunda rama prueva 2
      resultado2=a*b; //master
   printf("Tu multiplicasion es: %d",resultado); //master    
    getch(); /* Pausa */

    return 0;
    
} 
