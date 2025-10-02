#include <stdio.h>

int main(){
    int notas[5]; //declara um array de 5 posições para armazenar as notas 
    int i  ;      // variavel de controle para o loop(repetição)

    //entrada do usuario 
    printf("digite 5 notas:\n");

    for(i=0; i < 5; i++){
        scanf("%d", &notas[i]); // lê uma e armazena nas posição i do array 
    }

   //exibição
   printf("\n Notas digitadas:\n");

   for(i =0; i < 5; i++){
    printf("%d", notas[i]); //imprime a nota da posição i
   }

   return 0;

}