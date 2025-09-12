#include<stdio.h>
#include<string.h>

int main(){

    int i, contador = 0, contadorSemReajuste = 0, range = 3;
    char nomeFuncionarios[range][30];
    int tempoServico[range];
    float salarioFuncionario[range];
    int indexReajuste[range];
    int indexSemReajuste[range];

    for (i = 0; i < range; i++){
        printf("Digite o nome do funcionario \n");
        fgets(nomeFuncionarios[i], 30, stdin);
        nomeFuncionarios[i][strcspn(nomeFuncionarios[i], "\n")] = 0;
        printf("Digite o tempo de servico em anos \n");
        scanf("%d", &tempoServico[i]);
        printf("Digite o salario do funcionario. \n");
        scanf("%f", &salarioFuncionario[i]);
        fflush(stdin);
        if (salarioFuncionario[i] <= 2500 && tempoServico[i] >= 5){
            salarioFuncionario[i] *= 1.35;
            indexReajuste[contador] = i;
            contador++;
        } else if (salarioFuncionario[i] <= 2500 && tempoServico[i] < 5){
            salarioFuncionario[i] *= 1.15;
            indexReajuste[contador] = i;
            contador++;
        } else if (salarioFuncionario[i] > 2500 && tempoServico[i] > 5){
            salarioFuncionario[i] *= 1.25;
            indexReajuste[contador] = i;
            contador++;
        } else{
            indexSemReajuste[contadorSemReajuste] = i;
            contadorSemReajuste++;
        }

    }
    printf("\n -- Relatório -- \n");
    for (i = 0; i < range; i++){
        printf("Nome: %s | Tempo (anos): %d | Salario: %.2f \n", nomeFuncionarios[i], tempoServico[i], salarioFuncionario[i]);
    }
    printf("------------------------------ \n Funcionarios com reajuste \n ------------------------------ \n");

    for (i = 0; i < contador; i++){
        printf("Nome: %s | Tempo(anos): %d | Salario: R$ %.2f \n", nomeFuncionarios[indexReajuste[i]], tempoServico[indexReajuste[i]], salarioFuncionario[indexReajuste[i]]);
    }

    printf("------------------------------ \n Funcionarios sem reajuste \n ------------------------------ \n");

    for (i = 0; i < contadorSemReajuste; i++){
        printf("Nome: %s | Tempo(anos): %d | Salario: R$ %.2f \n", nomeFuncionarios[indexSemReajuste[i]], tempoServico[indexSemReajuste[i]], salarioFuncionario[indexSemReajuste[i]]);
    }
}
