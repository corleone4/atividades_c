#include <stdio.h>

int main() {
    int i, n;
    int idade;
    int nmrMasc = 0, nmrFem = 0;
    int mulheresInferiores35comExp = 0, menorIdade = 0;
    int nmrMasc45anos = 0, nmrMascExperiencia = 0, somaIdadeHomensExp = 0;
    float percentualMaior45 = 0, mediaHomensExperiencia = 0;
    char experiencia, sexo;
    
    printf("Digite quantos candidatos voce quer analisar: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("\nDigite a idade, sexo (M/F) e experiencia (S/N) do funcionario %d: \n", i + 1);
        scanf("%d %c %c", &idade, &sexo, &experiencia);

        // primeira vez que encontra uma mulher com experiência define menorIdade
        if (menorIdade == 0) {
            menorIdade = idade;
        }
        
        if (sexo == 'f' || sexo == 'F') {
            nmrFem++;
            
            if (experiencia == 'S' || experiencia == 's') {
                if (idade < menorIdade) {
                    menorIdade = idade;
                }
                if (idade < 35) {
                    mulheresInferiores35comExp++;
                }
            }
            
        } else if (sexo == 'm' || sexo == 'M') {
            nmrMasc++;
            
            if (idade > 45) {
                nmrMasc45anos++;
            }
            if (experiencia == 'S' || experiencia == 's') {
                nmrMascExperiencia++;
                somaIdadeHomensExp += idade;
            }
        }
    }


    if (nmrMascExperiencia > 0) {
        mediaHomensExperiencia = (float)somaIdadeHomensExp / nmrMascExperiencia;
    }

    if (nmrMasc > 0) {
        percentualMaior45 = ((float)nmrMasc45anos / nmrMasc) * 100.0;
    }

    printf("Numero de homens: %d\n", nmrMasc);
    printf("Numero de mulheres: %d\n", nmrFem);
    printf("Idade media dos homens com experiencia: %.2f\n", mediaHomensExperiencia);
    printf("Porcentagem dos homens com mais de 45 anos: %.2f%%\n", percentualMaior45);
    printf("Numero de mulheres com menos de 35 anos e experiencia: %d\n", mulheresInferiores35comExp);
    printf("Menor idade entre as mulheres com experiencia: %d\n", menorIdade);

    return 0;
}
