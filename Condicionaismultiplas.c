#include  <stdio.h>
#include  <stdlib.h>
#include <stdbool.h>
//função principal do programa
void main (){


   //Definindo variaveis
  int a = 20;


   //Conectivos logicos e (and)
    if(a > 5 && a > 15){
    printf("\n A variavel 'a' esta entre 5 e 15 ");
 }
   //Conectivos logicos ou (or)
   if(a > 5 || a > 15){
   printf("\n A variavel 'a' eh maior que 5 ou 15 ");
   }
   //Misturando conectivos
   if( (a > 5 && a < 15) || a == 20){
   printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20 ");
   }


   //Pausa o programa apos executar
    system("pause");

}
