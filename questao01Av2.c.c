#include <stdio.h>
#include <locale.h>

#define TAM 10
#define TAM2 20


int main() {
    setlocale( LC_ALL, "Portuguese");

    int vet1[TAM], vet2[TAM], vet3[TAM2], i, j, pos, cont;

    printf("============================================================");
    printf("\n|                    AV2 - ALGORITMOS I                    |");
    printf("\n============================================================\n");
    printf("\t\t      UNIÃO DE VETORES                     |\n");
    printf("============================================================\n");

        for (i = 0; i < TAM; i++){
                printf(" Entre com valores para o primeiro vetor [%d]: ", i);
                scanf("%d", &vet1[i]);
                fflush;
        }
            printf("\n============================================================\n");
                printf("\n");
                for (i = 0; i < TAM; i++){
                    printf(" Entre com valores para o segundo vetor [%d]: ", i);
                    scanf("%d", &vet2[i]);
                    fflush(stdin);
                }
                    for( pos = 0; pos < TAM; pos++){
                        vet3[pos] = vet1[pos];
                    }
                        for (i = 0; i < TAM; i++){
                            cont = 0;
                            for( j = 0; j < TAM; j++)
                                if(vet2[i] == vet1[j]) cont++;

                                    if( cont == 0){
                                        vet3[pos] = vet2[i];
                                        pos++;
                                    }
                                }
        printf("\n\n=======================================================================================================================\n");

        printf("\n Vetor 1: ");
        for (i = 0; i < TAM; i++){
            printf("\t%d ", vet1[i]);
        }
        printf("\n Vetor 2: ");
        for (i = 0; i < TAM; i++){
            printf("\t%d ", vet2[i]);
        }
        printf("\n\n=======================================================================================================================");

        printf("\n A união é: ");
        for (i = 0; i < pos; i++){
            printf(" %d, ", vet3[i]);
        }
        printf("\n=======================================================================================================================\n");

        printf("\n\n");
    return 0;
}
