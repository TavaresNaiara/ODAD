// 22/09/2023
//Naiara tavares exercicio Organização de aqrquivos e dados 

#include<stdio.h>

int main (int argc, char *argv[]){
	FILE  *arq;
	float num=2.09;
	

		arq=fopen("arquivo.tst","w");

	if(arq!=NULL){
		printf("%s \n","Arquivo aberto com sucesso!!");
		fprintf(arq,"%s\n", "aula ODAD 22/09/2023!!");
		fprintf(arq,"%.1f\n", num);
		fclose(arq);
	}
	else printf("erro criado \n");
	
	 return 0;
}

