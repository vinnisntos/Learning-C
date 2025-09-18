// Resolução exercicio 1

// includes
#include <stdio.h>
#include <stdlib.h>

// func multiplicar, consiste em multiplicar dois números, int a, e int b, retornando a * b.
int multiplicar(int a, int b) {
    return a * b;
}

// func main, é a função principal do programa,
// chama a função multiplicar, e multiplica os numeros padrão passados na função.
int main() {
    int resultado = multiplicar(5, 10);
    printf("Resultado: %d\n", resultado);
    return 0;
}