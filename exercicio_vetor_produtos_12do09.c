#include<stdio.h>
#include <string.h>

int main(){
    int i, index, range = 10, caracteres = 20;
    char produtos[range][caracteres];
    char buscaProduto[caracteres];
    int produtoEncontrado = 0;

    for (i = 0; i < range; i++){
        printf("Digite %d produtos, este eh o %d produto: \n", range, i+1);
        fgets(produtos[i], caracteres, stdin);
        fflush;
    }


    printf(" Digite o nome do produto que voce esta buscando \n");
    fgets(buscaProduto, caracteres, stdin);

    for (i = 0; i < range; i++){
        int verificacao = strcmp(buscaProduto, produtos[i]);
        if (verificacao == 0){
            index = i;
            i = range;
            produtoEncontrado = 1;
        }
    }
    if (produtoEncontrado == 1){
        printf("Produto encontrado no %d indice (%d posicao), o produto eh o(a) %s.", index, index+1, buscaProduto);
    } else {
        printf("Produto nao encontrado.");
    }

}
