#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo Variaveis
   int a = 5, b = 3;


   //Soma
   printf("\n A soma de %d e %d = %d",a, b, a + b);

   //Subtração
   printf("\n A subtracao de %d e %d = %d",a, b, a - b);

   //divisao
   printf("\n A divisao de %d e %d = %d",a, b, a / b);

   //Multiplicação
   printf("\n A multiplicacao de %d e %d = %d",a, b, a * b);

   //Resto da divisao
   printf("\n O resto da divisao entre %d e %d = %d",a, b, a % b);


   //Valor Absoluto
   printf("\n O valor absoluto de -3 = %d",  abs(-3));

   //Pausa o programa
   system("pause");

}
