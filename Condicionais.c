#include  <stdio.h>
#include  <stdlib.h>

//função principal do programa
int main (){

     //Definindo uma variaveis
     int a = 5, opcao = 3;
     float b = 2.5;
     char c = 'x';


     //Condicional simples
     if(a == 5 ){
        printf("\nA varivel a = 5");
     }

     if(c == 'x' ){
        printf("\nA varivel c = x");
     }



     if(b == 2.5 ){
        printf("\nA varivel b = 2.5");
     }

     //Numero Par ou Impar
     if( a % 2 == 1){
        printf("\nA variavel a eh impar\n");
     }else{
        printf("\nA variavel a eh par\n");
     }

     //Condicional composta
     if(opcao == 1){
        printf("\n a opcao e = 1 \n");
     }else if(opcao == 2){
      printf("\nA opcao = 2 \n ");
     }else{
      printf("\na opcao nao e igual a 1 e nem 2\n");
     }


    //Pausa o programa apos executar
    system("\npause");

    return 0;
}
