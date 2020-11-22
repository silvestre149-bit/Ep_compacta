void menu(){
    int opc;
    while(true){

    printf("\n");
    printf(" ===================================================== \n");
    printf("|                                                     |\n");
    printf("|         EP2 - Compactacao e Descompactacao          |\n");
    printf("|          Projeto e Analise de Algoritmos I          |\n");
    printf("|                                                     |\n");
    printf("|       Joao Vitor Duarte Queiroz  TIA 41930096       |\n");
    printf("|       Matheus Oliveira Silvestre  TIA 31989985      |\n");
    printf("|                                                     |\n");
    printf(" ===================================================== \n");

        printf("\n0 - Sair\n");
        printf("1 - Exercicio 1\n");
        printf("2 - Exercicio 2\n");
        printf("3 - Exercicio 3\n");

        printf("\nInforme sua opcao: ");
        scanf("%d", &opc); //recebe a funcao desejada

        if (opc == 0){
		break;
        }

        else if (opc == 1){
                ex1();
        }

        else if (opc == 2){

        }

		else if (opc == 3){

        }
	}
	return 0;
}
