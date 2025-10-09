#include <stdio.h>

int main(){
    char produto[50];  //guardar o nome do produto
    float preco;       //preço unitario
    int quantidade;    //quantidade comprada
    float total;       //valor total da compra

    printf("digite o nome do produto: ");
    scanf("%s,produto");

    printf("digite o preço unitario: ");
    scanf("%f",&preco);

    print("digiter a quantidade: ");
    scanf("%d", preco * quantidade);

    total = preco * quantidade;
    
    printf("produto: %s\n", produto);
    printf("preço Unitario: %.2f\n",preco);
    printf("Quantidade : %d\n", quantidade);
    printf("Total da compra: %.2\,n",total);
    return 0;
    


}

