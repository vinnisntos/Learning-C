// crie um programa que  calcule a media semestral, informe se a media e se o aluno está aprovado, ou em exame.


#include <stdio.h>
#include <stdlib.h>


//inicio do programa
int main(){

    //definindo variaveis
    float NP1, NP2, PIM, MediaParcial, MediaSemestral;

    //digitar notas
    printf("Digite a nota da NP1: ");
    scanf("%f", &NP1);
    printf("Digite a nota da NP2: ");
    scanf("%f", &NP2);
    printf("Digite a nota do PIM: ");
    scanf("%f", &PIM);

    //calculo da media
    MediaParcial = (NP1 * 4 + NP2 * 4) / 8;
    MediaSemestral = (MediaParcial * 8 + PIM * 2) / 10;

    // resultado
    printf("Media Semestral: %.2f\n", MediaSemestral);

    // verificar se o aluno esta aprovado, em exame ou reprovado
    if (MediaSemestral >= 7) {
        printf("Aluno Aprovado!\n");
    } else if (MediaSemestral >= 5) {
        printf("Aluno em Exame!\n");
        float NotaExame;
        printf("Digite a nota do Exame: ");
        scanf("%f", &NotaExame);
        float MediaFinal = (MediaSemestral + NotaExame) / 2;
        if (MediaFinal >= 5) {
            printf("Aluno Aprovado no Exame! Media Final: %.2f\n", MediaFinal);
        } else {
            printf("Aluno Reprovado no Exame! Media Final: %.2f\n", MediaFinal);
        }
    } else {
        printf("Aluno Reprovado!\n");


    // analisar contexto da exibição da media semestral antes de finalizar o programa. 

    }

    //finalizar programa

    return 0; 
}