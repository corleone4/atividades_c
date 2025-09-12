#include <stdio.h>

int main(){

    int i, j, k, depto, n;
    float salario, total, maior;

    for (i = 0; i < 3; i++){
        printf(" Qtd de funcionarios no departamento %d: ", i+1);
        scanf("%d", &n);
        total = 0;

        for (j = 0; j < n; j++){
            printf(" Digite o salario do funcionario %d: ", j+1);
            scanf("%f", &salario);
            if (salario > maior){
                maior = salario;
                depto = i + 1;
            }
            if (salario < 2800){
                k++;
            }
            total += salario;

        }
          printf("B) Total de salario do departamento %d: %.2f \n", i+1, total);
    }
        printf("\n A) O maior salario de todos os departamentos e qual departamento este salario pertence: %.2f do departamento %d \n", maior, depto);
        printf("C) Quantidade de funcionarios q tem salario menor que 2800 reais: %d \n", k);

}

