#include <stdio.h>

int main(){
    // desenvolva um programa que receba a idade, a altura e o peso de N pessoas. Calcule e mostre:
    // A) Quantidade de pessoas com idade superior a 50 anos;
    // B) Média das alturas das pessoas com idade entre 10 a 20 anos
    // C) A porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas.

    int i, j = 0, k = 0, idade, altura, n;
    float media = 0, porcentagem = 0, l = 0, peso;

    printf("Digite quantas pessoas você quer analisar: altura, idade e peso. \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("Digite a altura (em cms -> 150cm = 1,50m) , idade e peso em sequencia.");
        scanf("%d %d %f", &altura, &idade, &peso);
        if (idade > 50){ j++; }
        if (idade >= 10 && idade <= 20){k++; media+= altura;}
        if (peso < 40){l++;}
    }
    porcentagem = (l / n) * 100;
    printf("A) Quantidade de pessoas com idade superior a 50 anos: %d \n", j);
    if (k > 0){
        printf("B) A média das alturas das pessoas com idade entre 10 a 20 anos: %.2f \n", media / k);
    }
    else{
        printf("B) Nenhuma pessoa com idade entre 10 a 20 anos.\n");
    }
    printf("C) A porcentagem de pessoas com peso inferior a 40 quilos entre todos os analisados: %.2f \n", porcentagem);

}

