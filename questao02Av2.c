#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    srand(time(NULL));
    char Repetir;

    int  n, lancamento=0, soma=0, cont[6] = {0, 0, 0, 0, 0, 0};

    float percentual, media;

    printf("============================================================");
    printf("\n|                    AV2 - ALGORITMOS I                    |");
    printf("\n============================================================\n");
    printf("\t\t      LAN�ADOR DE DADO                     |\n");
    printf("============================================================\n");


        do{
            n =  (rand() % 6)+1;
            soma = soma + n;
            lancamento = lancamento + 1;
            media = (float)soma / (float)lancamento;
            printf("\n");
            printf(" O valor do dado foi: %d", n);
            printf("\n\n");

        if ( n == 1 ) {
            cont[0] = cont[0] + 1;
            } else {
                if( n == 2 ){
                cont[1] = cont[1] +1;
                } else{
                    if ( n == 3 ){
                      cont[2] = cont[2] + 1;
                    } else {
                        if( n == 4 ){
                        cont[3] = cont[3] + 1;
                        } else{
                            if( n == 5 ){
                                cont[4] = cont[4] + 1;
                            }else{
                                if( n == 6 ){
                                cont[5] = cont[5] + 1;
                            }else{
                                cont[6] = cont[6] + 1;

                                }
                            }
                        }
                    }
                }
            }

            printf(" Quer jogar novamente ?");
            printf(" Digite S para repetir ou N para encerrar: ");
            scanf(" %c", &Repetir);

            printf("\n============================================================\n");

            } while(Repetir == 'S'|| Repetir == 's');


            printf("\t      QUANTAS VEZES CADA N�MERO APARECEU           |\n");
            printf("============================================================\n");
            printf("\n O n�mero 1 apareceu %d vezes, o que representa %.1f %% ", cont[0], ((float)cont[0] / (float)lancamento) * 100);
            printf("\n O n�mero 2 apareceu %d vezes, o que representa %.1f %% ", cont[1], ((float)cont[1] / (float)lancamento) * 100);
            printf("\n O n�mero 3 apareceu %d vezes, o que representa %.1f %% ", cont[2], ((float)cont[2] / (float)lancamento) * 100);
            printf("\n O n�mero 4 apareceu %d vezes, o que representa %.1f %% ", cont[3], ((float)cont[3] / (float)lancamento) * 100);
            printf("\n O n�mero 5 apareceu %d vezes, o que representa %.1f %% ", cont[4], ((float)cont[4] / (float)lancamento) * 100);
            printf("\n O n�mero 6 apareceu %d vezes, o que representa %.1f %% ", cont[5], ((float)cont[5] / (float)lancamento) * 100);
            printf("\n");
            printf("\n============================================================\n");
            printf("\t       LAN�AMENTOS / SOMA / M�DIA                  |\n");
            printf("============================================================\n");
            printf("\n O n�mero total de lan�amentos foi: %d ", lancamento);
            printf("\n A soma total dos lan�amentos foi: %d ", soma);
            printf("\n A m�dia dos lan�amentos foi: %.2f ", media);
            printf("\n");
            printf("\n============================================================\n");


return 0;
}
