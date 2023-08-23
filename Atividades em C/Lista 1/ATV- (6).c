#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n, i, valorVerificado, min = 1, max = 100, posicao = 0;
	bool contemVerificado = false;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	int vet[n];
	
	for(i = 0; i < n; i++)
		vet[i] = (rand() % (max - min + 1)) + min;
		
	
	printf("Digite o valor que gostaria de verificar: ");
	scanf("%d", &valorVerificado);
	
	for(i = 0; i < n; i++){
		if(vet[i] == valorVerificado){
			contemVerificado = true;
			posicao = i;
		}
	}
		
			
			
	if(contemVerificado){
		printf("Número digitado está no vetor, na posição %d.\n", posicao);
	} else{
		printf("Número digitado não está no vetor.\n");
	}
			
	for(i = 0; i < n; i++)
		printf("%d | ", vet[i]);
		
	return 0;
}
