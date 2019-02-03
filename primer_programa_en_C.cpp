/* Programa: Hola mundo */

#include <conio.h>
#include <stdio.h>

int main()
{

<<<<<<< HEAD
int a,b,resultado,resultado2;
=======
int a,b,resultado3;
>>>>>>> primera_rama

   printf( " Hola mundo \n" );
   printf( " este es mi primer programa en c\n" );
   printf( " la suma de dos numeros A y B\n" );
<<<<<<< HEAD
    printf( "dame el primer valor para A = " );//primera rama prueva 1
    scanf("%d", &a);
     printf( "dame el segundo valor para B = " );//primera rama prueva 1
     scanf("%d", &b);
     resultado=a+b; //segunda rama prueva 2
     	printf("Tu suma es: %d",resultado); //segunda rama prueva 2
      resultado2=a*b; //master
   printf("Tu multiplicasion es: %d",resultado); //master    
    getch(); /* Pausa */
=======
   printf( "dame el primer valor para A = " );//primera rama prueva 1
   scanf("%d", &a);
   printf( "dame el segundo valor para B = " );//primera rama prueva 1
   scanf("%d", &b);
   getch(); /* Pausa */
    
    
 printf( "las divicion de A y B\n" ); //MASTER
 resultado3=a/b;
 	printf("la divivion es: %d",resultado3);
>>>>>>> primera_rama

    return 0;
    
} 
