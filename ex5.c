#include <stdio.h>
#include <string.h>

void inverter_string(char *palavra, int n);

int main(void) {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int n = strlen(palavra);

    inverter_string(palavra, n);

    return 0;
}

void inverter_string(char *palavra, int n) {
    char *ptr = palavra + n - 1;

    while (ptr >= palavra) {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");
}
