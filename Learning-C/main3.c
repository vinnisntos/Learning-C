// resolução exercicio 2 

//includes
#include <stdio.h>
#include <stdlib.h>

// func ehPar, verifica se um número é par, retorna 1 se for par e 0 se for ímpar.
int ehPar(int numero) {
    int resto = numero % 2;

    if (resto == 0) {
        return 1;  // é par
    } else {
        return 0;  // é ímpar
    }
}

// func main: ponto de entrada do programa; declara a variável numero
//e lê um valor inteiro digitado pelo usuário
int main(){
    int numero;
    printf ("Digite um número: ");
    // scanf lê um número inteiro da entrada padrão e armazena na variável numero
    scanf ("%d", &numero);

    // chama a função ehPar e verifica se o número é par
    if (ehPar(numero)){
        printf ("O número é par.\n");
    } else {
        printf ("O número é ímpar.\n");
    }

    return 0;
}