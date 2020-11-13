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



    //exibição do número de vogais encontradas
    if (cont_num == 1){
        printf ("\n\nO texto informado possui 1 letras\n\n");
    }else{
        printf ("\n\nO texto informado possui %i letras %c\n\n",num[0],vet[0]);
        printf ("\n\nO texto informado possui %i letras %c\n\n",num[1],vet[1]);
        printf ("\n\nO texto informado possui %i letras %c\n\n",num[2],vet[2]);
        printf ("\n\nO texto informado possui %i letras %c\n\n",num[3],vet[3]);
        printf ("\n\nO texto informado possui %i letras %c\n\n",num[4],vet[4]);
        printf ("\n\nO texto informado possui %i letras %c\n\n",num[5],vet[5]);

    }

    system ("pause");

    return 0;
}
