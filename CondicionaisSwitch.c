#include  <stdio.h>
#include  <stdlib.h>

 //fun��o principal do programa
void main (){

   //Definindo variaveis
   int a = 2;
   char b = 'y';


   if(a == 1){
    printf("\n Opcao escolhida: 1");
   }else if(a == 2){
     printf("\n Opcao escolhida: 2");
   }else if (a == 3){
     printf("\n Opcao escolhida: 3");
   }else{
     printf("\n Opcao invalida");
   }


   //O mesmo codigo adaptado ao switch
   switch(a){
    case 1:
      printf("\n Opcao escolhida: 1");
    break;

    case 2:
      printf("\n Opcao escolhida: 2");
    break;

    case 3:
      printf("\n Opcao escolhida: 3");
    break;

    default:
      printf("\n Opcao invalida");
    break;
   }


   //Switch com char
   switch(b){
    case 'x':
      printf("\n A letra e x");
    break;
    default:
      printf("\n Opcao invalida");
    break;
   }


   //pausa o programa apos executar
   system("pause");






}
