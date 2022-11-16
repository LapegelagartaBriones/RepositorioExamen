#include<stdio.h>
void main(){
	int cont = 0, numAst;
	printf("Programa que imprime los asteriscos que se pidan\n\n");
	printf("Numero de asteriscos a imprimir: ");
	scanf_s("%d",&numAst);
	while(cont++ < numAst)
		printf("*");
}
