#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char vet[100];
	int i, tamanho;
	
	printf("Digite a string: ");
	gets(vet);
	
	tamanho = strlen(vet);
	
	for(i = tamanho - 1; i >= 0; i--)
		printf("%c", vet[i]);
			
	return 0;
}
