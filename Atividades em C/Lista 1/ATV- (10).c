#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	char vet[50];
	int i, tamanho;
	
	printf("Digite as bases da fita de DNA: ");
	gets(vet);
	
	tamanho = strlen(vet);
	
	strupr(vet);
	
	for(i = 0; i < tamanho; i++){
		switch(vet[i]){
			case 'A':
				vet[i] = 'T';
				break;
			case 'T':
				vet[i] = 'A';
				break;
			case 'C':
				vet[i] = 'G';
				break;
			case 'G':
				vet[i] = 'C';
				break;
			default:
				break;
		}	
	}
	
	printf("DNA complementar: %s.", vet);
	return 0;
}