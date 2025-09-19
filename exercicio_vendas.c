#include<stdio.h>
#include<string.h>

    char produto[10][20];
    int quantidade[10];
    float valor[10];

    char cliente[10][20];
    int quantidade_cliente[10];
    float valorTotal[10];

    int indices[10];
    int i = 0, opcao = 0, j = 0, k = 0;


void cadastrarProduto(){
    printf("Digite o nome do produto que você quer cadastrar \n");
    getchar();
    fgets(produto[i], 20, stdin);
    produto[i][strcspn(produto[i], "\n")] = '\0';
    
    printf("Digite a quantidade do produto \n");
    scanf("%d", &quantidade[i]);
    printf("Digite o valor do produto \n");
    scanf("%f", &valor[i]);
    printf("Produto cadastrado com sucesso. \n");
    i++;
    printf("\n \n \n \n \n");
}

void consultarProdutos(){

    printf("\n--- Consulta ---\n");
    for (j = 0; j < i; j++){
        
        printf("\n----------------\n");
        printf(" Nome do produto: %s | ", produto[j]);
        printf(" Quantidade do produto: %d | ", quantidade[j]);
        printf(" Valor do produto: %.2f \n", valor[j]);
        printf("\n----------------\n");
    }
}

void venda(){
    
    int id;
    printf("\n----------------\n");
    printf("Digite o nome do cliente que está comprando \n");
    getchar();
    fgets(cliente[k], 20, stdin);
    cliente[i][strcspn(cliente[k], "\n")] = '\0';
    printf("Digite o id do produto \n");
    scanf("%d", &id);
    
    do{
    printf("Digite a quantidade do produto que ele vai comprar \n");
    scanf("%d", &quantidade_cliente[k]);
        if(quantidade_cliente[k] > quantidade[id]){
            printf("Quantidade maior do que possuimos no estoque. \n");
        }
    } while (quantidade_cliente[k] > quantidade[k]);
    quantidade[id] -= quantidade_cliente[k];
    
    valorTotal[k] = valor[id] * quantidade_cliente[k];
    printf("Produto: %s, Valor: %.2f \n", produto[id], valor[id]);
    printf("\n Total: R$ %.2f \n", valorTotal[k]);
    printf("Venda realizada com sucesso. \n");
    printf("\n----------------\n");
    printf("\n \n \n \n \n");
    k++;
}

void consultarVendas(){

    printf("\n--- Consulta vendas ---\n");
    for (j = 0; j < k; j++){
        
        printf("\n----------------\n");
        printf(" Nome do cliente: %s | ", cliente[j]);
        printf(" Quantidade do produto: %d | ", quantidade_cliente[j]);
        printf(" Valor total: %.2f \n", valorTotal[j]);
        printf("\n----------------\n");
    }
}

void consultarProdutosEstoque(){
    int l, contador = 0;
    
    for (l = 0; l < i; l++){
        
        if (quantidade[l] > 0){
            indices[contador] = l;
            contador++;
        }
    }
    printf("\n--- Consulta ---\n");
    for (l = 0; l < contador; l++){
    
        printf("\n----------------\n");
        printf(" Nome do produto: %s | ", produto[indices[l]]);
        printf(" Quantidade do produto: %d | ", quantidade[indices[l]]);
        printf(" Valor do produto: %.2f \n", valor[indices[l]]);
        printf("\n----------------\n");
    }
    
}

int main()
{
    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Consultar produto\n");
        printf("3 - Baixa/Venda\n");
        printf("4 - Relatorio de Saida\n");
        printf("5 - Relatorio de Estoque\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            cadastrarProduto();
            break;
        case 2:
            consultarProdutos();
            break;
        case 3:
            venda();
            break;
        case 4:
            consultarVendas();
            break;
        case 5:
            consultarProdutosEstoque();
            break;
        case 6:
            return 0;
            break;
        }
    }
    while (opcao != 6);


}
