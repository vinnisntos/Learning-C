// resolução exercicio 3

//include né, pode faltar n, igual import do python
#include <stdio.h>

//void da saudação, char nome, imprime olá nome
void saudacao(char nome[]) {
    printf ("Olá %s!\n", nome);
}

//função principal main, recebe entrada do usuário e taca la no nome pra saudacao
int main() {
    char nome[50];
    printf ("Digite seu nome: ");
    //fgets lê uma linha da entrada padrão e armazena em nome, igual ao input do python
    fgets(nome, sizeof(nome), stdin);

    //strcspn remove o \n do final da string, igual o rstrip do python
    nome[strcspn(nome, "\n")] = 0;

    //saudacao pra finalizar
    saudacao(nome);

    // finaliza o programa
    return 0;
}