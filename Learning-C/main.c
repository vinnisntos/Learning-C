// Aula 01, Kora Teacher!

//primeiro codigo criado com base nas explicações lidas
#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    printf ("Qual sua idade? ");
    scanf ("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else{
        printf("Você é menor de idade.\n");
    }

    return 0;
}