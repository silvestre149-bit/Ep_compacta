#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void){
    char vet[100];
    char texto[100];//vetor que receberá a palavra
    int num[100];
    int i, cont_l=0, cont_num=0;/*Variáveis contadoras,do loop principal vetor texto,secundario vetor vogais e contador,respectivamente*/

    //armazenara a palavra digitada pelo usuário
    printf ("Digite a palavra: ");
    fflush(stdin);
    gets(texto);

    //contagem da palavra de entrada feita pelo usuário
    for (i=0;i<=strlen(texto);i++){
        if (texto[i]!=texto[i-1]){
            if (i>0){
                    num[cont_num]=cont_l;
                    cont_num++;
                    cont_l=0;
            }
            cont_l++;
            vet[cont_num]=texto[i];
        }
        if (texto[i]==texto[i-1]){
            cont_l++;
        }
    }

    //for para imprimir vetor compactado
    for (int i = 0; i < strlen(vet); i++){
        if (i != strlen(vet) - 1)
            printf("%c%i-", vet[i], num[i]);
        else
            printf("%c%i\n", vet[i], num[i]);
    }

    system ("pause");

    return 0;
}
