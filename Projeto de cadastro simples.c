#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <mysql/mysql.h>
#define size 200
//Variáveis global
char nome[size][50];
int idade[size];
char morada[size][50];
int phone[size];
int op;
int result;
static int linha;

int main(void){
	
	//Part visual do algoritmo
	
	
	printf("########################################################\n\n                Bem-Vindo a lista pessoal             \n\n########################################################\n\n");
	int opcao;
	printf("Insira 1 para cadastra\nInsira 2 para view lista\nInsira 3 para pesquisar\nInsira aqui: ");
	scanf("%d", &opcao);
	
	
	if(opcao == 1){
		system("cls");
		printf("########################################################\n\n                Cadastra-se             \n\n########################################################\n\n");
		void cadastrar(void);
		cadastrar();
		system("cls");
		int main(void);
		main();
	}else if(opcao == 2){
		system("cls");
		printf("########################################################\n\n                Lista completa             \n\n########################################################\n\n");
		void listacompleta(void);
		listacompleta();
		system("cls");
		int main(void);
		main();
	}else if(opcao == 3){
		system("cls");
		printf("########################################################\n\n                Pesquisa alguem             \n\n########################################################\n\n");
		void pesquisar(void);
		pesquisar();
		system("cls");
		int main(void);
		main();
	}else{
		system("cls");
		printf("########################################################\n\n                Obrigado pela visita.            \n\n########################################################\n\n");
		system("exit");
	}
	
	/*
	*/
	
	system("pause");
	return 0;
}
//Cadastrar peoples
void cadastrar(void){
	do{
		
		printf("Insira seu nome: ");
		scanf("%s", &nome[linha]);
		printf("Insira sua idade: ");
		scanf("%d", &idade[linha]);
		printf("Insira sua morada: ");
		scanf("%s", &morada[linha]);
		printf("Insira seu numero: ");
		scanf("%d", &phone[linha]);	
		
		printf("Digite 1 para continuar e 0 para sair: ");
		scanf("%d", &op);
		linha++;
	}while(op == 1);
}

//Ver a lista completa dos cadastrados
void listacompleta(void){
	printf("Lista completa\n");
	for(result = 0; result < linha; result++){
		printf("%d  Nome: %s\n  Idade: %d\n  Morada: %s\n  Numero: %d\n\n",result+1 ,nome[result], idade[result], morada[result], phone[result]);
	}
	system("pause");
}
//Pesquisa de pessoas cadastrada
void pesquisar(void){
	char pesnome[size];
	int pesnum;
	int num;
	int tentar;
	printf("Insira 1 para pesquisar por nome e 2 Por numero: ");
	scanf("%d", &num);
	
	do{
		switch(num){
		case 1:
			printf("Insira o nome: ");
			scanf("%s", &pesnome);
			for(result = 0; result < size; result++){
				if(strcmp(nome[result],pesnome) == 0){
					printf("%d  Nome: %s\n  Idade: %d\n  Morada: %s\n  Numero: %d\n\n",result+1 ,nome[result], idade[result], morada[result], phone[result]);
				}
			}
		break;
		case 2:
			printf("Insira o numero");
			scanf("%d", &pesnum);
			for(result = 0; result < size; result++){
				if(pesnum == phone[result]){
					printf("%d  Nome: %s\n  Idade: %d\n  Morada: %s\n  Numero: %d\n\n",result+1 ,nome[result], idade[result], morada[result], phone[result]);
				}
			}
		break;
		default:
			printf("Este numero nao e valido!");
	}
	printf("Insira 1 para continuar e 0 para sair: ");
	scanf("%d", &tentar);
	}while(tentar == 1);
}
