#include <stdio.h>
#include <stdlib.h>


   //função principal do programa
   void main(){


   //Definindo Variaveis
   int opcao;

   //Confere e valida opcao
   while(opcao < 1 || opcao > 3){

   //Interface de menu
   printf("\nEscolha uma opcao");
   printf("\nopcao 1");
   printf("\nopcao 2");
   printf("\nopcao 3");

   //Lendo a opcao
   scanf("%d", &opcao);


   //Resultado de acordo com a resposta
   switch(opcao){
   case 1:
     printf("\nOpcao 1 foi escolhida ");
     break;
   case 2:
     printf("\nOpcao 2 foi escolhida ");
     break;
   case 3:
     printf("\nOpcao 3 foi escolhida ");
     break;
   default:
     printf("\nOpcao invalida ");
     break;
   }
}


   //Pausa o programa
   system("pause");
}
