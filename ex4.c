#include <stdio.h>
#include <string.h>

int Palindromo(char x[], int n){

    char *ptri = x;
    char *ptrf = ptri + n - 1;

    while(ptrf > ptri){
        if(*ptrf != *ptri){
            return 0;
        }
        ptrf--;
        ptri++;
    }
    return 1;
}

int main(){

        char palavra[50];


        printf("Digite uma palavra: ");
        scanf("%s", palavra);

        int n = strlen(palavra);

        if(Palindromo(palavra, n) == 1){
            printf("Resultado: é um palíndromo!\n");
        } else {
            printf("Resultado: NÃO é!\n");
        }

    return 0;
}