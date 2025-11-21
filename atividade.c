#include <stdio.h>
#include <stdlib.h>

int main() {
    float vet[10];
    int i, codigo;
    printf("Vamos criar um vetor de 10 posicoes\n\n");
    for (i = 0; i < 10; i++) {
        printf("Entre com a posicao[%d]: ", i);
        scanf("%f", &vet[i]);}

    printf("O que deseja fazer:\n(digite 1 para ordem direta e 2 para ordem inversa): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        printf("\nVetor em ordem direta:\n");
        for (i = 0; i < 10; i++) {
            printf("%.2f ", vet[i]); }
        printf("\n");
    }
	else if (codigo == 2) {
        printf("\nVetor em ordem inversa:\n");
        for (i = 9; i >= 0; i--) {
            printf("%.2f ", vet[i]); }
        printf("\n");
    }
	else {
        printf("\nCodigo invalido!\n");
    }

    return 0;
}