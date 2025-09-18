// crie um programa que calcule a media de um triangulo, informe se o triangulo é equilatero, isosceles ou escaleno.


#include <stdio.h>
#include <stdlib.h>

//inicio do programa
int main(){
    //definindo variaveis
    float lado1, lado2, lado3;

    //digitar lados do triangulo
    printf("Digite o valor do lado 1: ");
    scanf("%f", &lado1);
    printf("Digite o valor do lado 2: ");
    scanf("%f", &lado2);
    printf("Digite o valor do lado 3: ");
    scanf("%f", &lado3);

    // verificar se é triangulo


    //verificar tipo de triangulo
    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo é Equilatero.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triangulo é Isosceles.\n");
    } else {
        printf("O triangulo é Escaleno.\n");
    }

    //finalizar programa
    return 0;
}