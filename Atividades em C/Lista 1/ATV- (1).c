#include <stdio.h>

int somar(int vet[], int n){
	int soma = 0, i;
	for(i = 0; i < n; i++)
		soma += vet[i];
	return soma;
}

int main () {
	int vet[100], i, n;
	
	printf("Digite o valor de N (Limite de 100): ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("Digite o valor de vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	
	printf("Soma = %d.", somar(vet, n));
	
	
	return 0;
}
