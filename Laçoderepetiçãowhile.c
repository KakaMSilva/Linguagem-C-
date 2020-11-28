#include <stdio.h>
#include <stdlib.h>

void main(){

   //Definindo Variaveis
   int a = 1, b = 10;


    //Contando ate 10
    while(a <= 10){

      //imprimindo 'a' na tela
      printf("\n%d", a);

      //incremento
      a++; //a = a + 1;
}
   //Contando regressiva
    while(b >= 1){

      //imprimindo 'a' na tela
      printf("\n%d", b);

      //incremento
      b--; //b = b + 1;
}
   //Pausa o programa
   system("pause");
}
