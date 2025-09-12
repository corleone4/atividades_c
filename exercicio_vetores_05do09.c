#include<stdio.h>
#include <string.h>

int main(){

    int i, contador = 0, range = 3;
    char nome[range][20];
    char xNome[range][20];
    int idade[range];
    int xIdade[range];
    int maiorIdade = 0, indexIdade;

    for (i = 0; i < range; i++){
        printf("Digite o nome \n");
        fgets(nome[i], 20, stdin);
        nome[i][strcspn(nome[i], "\n")] = 0;
        printf("Digite a idade \n");
        scanf("%d", &idade[i]);
        fflush(stdin);
        if (idade[i] <= 20){
            strcpy(xNome[contador], nome[i]);
            xIdade[contador] = idade[i];
            contador++;

        }
    }

    for (i = 0; i < range; i++){
        printf("Nome: %s Idade: %d \n", nome[i], idade[i]);

    }
    printf("Idade menor ou igual a 20: \n");
    for (i = 0; i < contador; i++){

        printf("Nome: %s Idade: %d \n", xNome[i], xIdade[i]);

    }
}
