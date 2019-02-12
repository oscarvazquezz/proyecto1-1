/* Programa: Hola mundo */

#include <conio.h>
#include <math.h>
#include <stdio.h>
int main()
{
	 int a,b,resultado,resultado2;
	 int resultado3,resultado4,resultado5;


	 printf("Hola mundo \n" );
	 printf("este es mi primer programa en c\n" );
	 printf("la suma de dos numeros A y B\n" );
   
	 printf("dame el primer valor para A = " );//primera rama prueva 1
	 scanf("%d", &a);
     printf( "dame el segundo valor para B = " );//primera rama prueva 1
     scanf("%d", &b);
     
     resultado=a+b; //segunda rama prueva 2
     
     printf("Tu suma es: %d\n",resultado); //segunda rama prueva 2
     
	 resultado2=a*b; //master
	 
     printf("Tu multiplicacion es: %d\n",resultado); //master    
     getch(); /* Pausa */

     printf("dame el primer valor para A = " );//primera rama prueva 1
     scanf("%d", &a);
     printf("dame el segundo valor para B = " );//primera rama prueva 1
     scanf("%d", &b);
     getch(); /* Pausa */
    
     printf("las potencias de A y B\n" );
     
     resultado4=pow(a,2);
     resultado5=pow(b,2);
     printf("la potencia de A es: %d\n",resultado4);
     printf("la potencia de B es: %d \n",resultado5);
     
     printf("las divicion de A y B\n" ); //MASTER
     
     resultado3=a/b;
 	 printf("la divicion es: %d\n",resultado3);

    return 0;
    
} 
