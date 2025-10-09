#include <stdio.h>

int main(){
    char nome [50];
    float nota1,nota2,nota3, media;
    printf("digite o nome do aluno: ");
    scanf("%s", nome);

    printf("digite as 3 notas: ");
    scanf("%f %f %f",&nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("aluno: %s -  media = %.2f\n", nome, media);
    return 0;