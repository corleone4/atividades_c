#include <stdio.h>

int main() {
    int i, n, qtdBarato = 0, qtdNormal = 0, qtdCaro = 0;
    float preco, precoBase, total = 0, maiorPreco = 0, menorPreco = 0, totalAdicional = 0, mediaAdicional = 0, estocagem, imposto, totalImposto = 0;
    char categoria, refrigeracao, categoriaFinal;
    
    printf("Digite o numero de produtos que você quer adicionar\n");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        printf("Digite o preço unitario, se é refrigerado (S ou N) e sua categoria (A, V e L) \n");
        scanf("%f %c %c", &preco, &refrigeracao, &categoria);
        precoBase = preco;
        
        
        if(preco <= 50){
            if (categoria == 'A' || categoria == 'a'){
                estocagem = 5;
            } else if (categoria == 'L' || categoria == 'l'){
                estocagem = 10;
            }
            else if (categoria == 'V' || categoria == 'v'){
                estocagem = 15;
            } else{
                estocagem = 0;
                printf("Digite a categoria corretamente.");
                return 0;
            }
        }
        
        else if (preco > 50 && preco <= 70){
            if (refrigeracao == 'S' || refrigeracao == 's'){
                estocagem = 21;
            } else {
                estocagem = 12;
            }
            
        } else {
            if (refrigeracao == 'S' || refrigeracao == 's'){
                if (categoria == 'A' || categoria == 'a'){
                    estocagem = 6;
                } else if (categoria == 'L' || categoria == 'l'){
                    estocagem = 2;
                }
                else if (categoria == 'V' || categoria == 'v'){
                    estocagem = 4;
                } else{
                    estocagem = 0;
                    printf("Digite a categoria corretamente.");
                    return 0;
                } 
            } else {
                
                if (categoria == 'L' || categoria == 'l'){
                    estocagem = 1;
                } else if (categoria == 'A' || categoria == 'a' || categoria == 'V' || categoria == 'v'){
                    estocagem = 0;
                } else{
                    estocagem = 0;
                    printf("Digite a categoria corretamente.");
                    return 0;
                } 
            }
        }
        if ((categoria == 'A' || categoria == 'a') && (refrigeracao == 's' || refrigeracao == 'S')){
            imposto = 0.04;
        } else {
            imposto = 0.02;
        }
        total = (preco + estocagem) * (1 + imposto);
        totalAdicional += total - precoBase;    
        totalImposto += total * imposto;
        
        if (total <= 20){
            categoriaFinal = 'B';
            qtdBarato++;
        } else if (total > 20 && total <= 100){
            categoriaFinal = 'N';
            qtdNormal++;
        } else {
            categoriaFinal = 'C';
            qtdCaro++;
        }
        
        if (i == 0) {
            maiorPreco = preco;
            menorPreco = preco;
        } else {
            if (preco > maiorPreco) {
                maiorPreco = preco;
            }
            if (preco < menorPreco) {
                menorPreco = preco;
            }
        }

        
        printf("Preço base: R$ %.2f \n", precoBase);
        printf("Total do produto: R$ %.2f \n", total);
        
        if (categoriaFinal == 'B') {
            printf("Classificação: Barato\n");
        } else if (categoriaFinal == 'N') {
            printf("Classificação: Normal\n");
        } else if (categoriaFinal == 'C') {
            printf("Classificação: Caro\n");
        }
        
        
    }
    mediaAdicional = totalAdicional / n;
    printf("Total adicional: R$ %.2f \n", totalAdicional);
    printf("Total de impostos: R$ %.2f \n", totalImposto);
    printf("Maior preço: R$ %.2f \n", maiorPreco);
    printf("Menor preço: R$ %.2f \n", menorPreco);
    printf("Média dos valores adicionais: %.2f \n", mediaAdicional);
    printf("Qtd barato: %d \n Qtd normal: %d \n Qtd caro: %d", qtdBarato, qtdNormal, qtdCaro);
    
}