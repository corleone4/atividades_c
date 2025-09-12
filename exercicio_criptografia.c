#include<stdio.h>
#include<string.h>

int main(){

    char senha [30];
    char palavra[30];
    int i, tam;
    printf("Digite uma senha \n");
    gets(senha);
    tam = strlen(senha);


    for (i = 0; i < tam; i++){
        palavra[i] = tolower(senha[i]);
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            senha[i] = ".";
        }
    }
        printf("%s", senha);


}
