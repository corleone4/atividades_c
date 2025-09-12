#include <stdio.h>

int main() {
    //Em uma fábrica trabalham homens e mulheres divididos em três classes.
    // trabalhadores que produzem até 30 peças - classe 1
    // trabalhadores que produzem de 31 até 35 peças - classe 2
    // trabalhadores que produzem mais que 35 peças - classe 3
    
    // desenvolva um programa que receba prontuário, sexo, e peças produzidas. Calcule e mostre:
    
    /* 
    
    a) numero do prontuário e salário
    b) total de pagamento da fábrica
    c) total de peças fabricadas
    d) média de peças fabricadas por homens
    e) média de peças fabricadas por mulheres
    f) numero de prontuário e o sexo do maior salário
    
    */
    
    int i, j, k, n, prontuario, totalPecas = 0, pecas, pecasM = 0, pecasF = 0, classe = 0, classe1 = 0, classe2 = 0, classe3 = 0, masculinos = 0, femininos = 0;
    char sexo, sexoMaiorSalario;
    float maiorSalario, mediaM, mediaF, salario, total = 0;
    int prontMaiorSalario;
    
    printf("Digite quantas pessoas você quer adicionar: \n");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        printf("Digite o prontuário, sexo e peças produzidas \n");
        scanf("%d %c %d", &prontuario, &sexo, &pecas);
            if (pecas <= 30){
                classe = 1;
                classe1++;
                salario = 1518;
            } else if (pecas > 30 && pecas <= 35){
                classe = 2;
                classe2++;
                salario = 1518 + ((pecas - 30) * 0.03 * 1518);
            } else {
                classe = 3;
                classe3++;
                salario = 1518 + ((pecas - 35) * 0.05 * 1518);
            }
            
            if (sexo == 'F' || sexo == 'f'){
                femininos++;
                pecasF += pecas;
            } else if (sexo == 'M' || sexo == 'm'){
                masculinos++;
                pecasM += pecas;
            } else {
                printf(" Digite um sexo válido!");
                return 0;
            }
            
            if (maiorSalario < salario){
                maiorSalario = salario;
                sexoMaiorSalario = sexo;
                prontMaiorSalario = prontuario;
            }
            printf("a) Salario: %.2f; Prontuário: %d, Classe: %d \n \n", salario, prontuario, classe);
        total+= salario;
        totalPecas += pecas;
        classe = 0;
        
    }
        mediaM = pecasM / masculinos;
        mediaF = pecasF / femininos;
        
        
        printf("b) total de pagamento da fábrica: %.2f \n", total);
        printf("c) total de peças fabricadas: %d \n", totalPecas);
        printf("d) média de peças fabricadas por homens: %.f \n", mediaM);
        printf("e) média de peças fabricadas por mulheres: %.f \n", mediaF);
        printf("f) numero de prontuário e o sexo do maior salário: %d, Sexo: %c \n", prontMaiorSalario, sexoMaiorSalario);

    
}