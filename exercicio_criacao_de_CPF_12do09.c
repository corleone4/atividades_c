#include<stdio.h>

int main(){

    // calculo de criação de um novo cpf
    // primeira etapa: calculo do DAC 1 do cpf

    char cpf2[9];
    int soma = 0, resto = 0, conta = 0, DAC1, DAC2;
    int cpf[11];
    int i, j = 10;

    printf("Digite o seu cpf \n");
    gets(cpf2);

    for (i = 0; i < 9; i++){
        cpf[i] = cpf2[i] - '0';
    }

    for (i = 0; i < 9; i++){
        soma += cpf[i] * j;
        j--;
    }
    resto = soma % 11;
    conta = 11 - resto;

    if (conta > 9){
        DAC1 = 0;
    } else {
        DAC1 = conta;
    }
    cpf[10] = DAC1;
    j = 11;
    soma = 0;
    for (i = 0; i < 9; i++){
        soma += cpf[i] * j;
        j--;
    }
    soma += DAC1 * 2;
    printf(" \n --------- \n");

    resto = soma % 11;
    conta = 11 - resto;

    if (conta > 9){
        DAC2 = 0;
    } else {
        DAC2 = conta;
    }
    cpf[10] = DAC1;
    cpf[11] = DAC2;
    printf("\t ------------------------------ \t \n");
    printf("\t \tO seu DAC1 eh: %d \n", DAC1);
    printf("\t \tO seu DAC2 eh: %d \n", DAC2);
    printf("\t ------------------------------ \t");
}
