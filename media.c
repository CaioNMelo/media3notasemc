#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
char nome[40];
float nota1, nota2, nota3, media;

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Digite seu nome\n");
	scanf("%s", &nome);
	printf("Digite sua primeira nota\n");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota\n");
	scanf("%f", &nota2);
	printf("Digite sua terceira nota\n");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) /3;
printf("%s, sua média é %.2f\n", nome, media);
}