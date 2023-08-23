#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
	void entrada(int a, int b, int c[]){
		for(a = 0; a < b; a++){
			printf("Digite o valor do vetor na posição [%d]: ", a);
			scanf("%d", &c[a]);
		}
	}
	setlocale(LC_ALL, "Portuguese");
	int n, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	int vet1[n], vet2[n], vet3[n];
	
	entrada(i, n, vet1);
	entrada(i, n, vet2);
	
		system("cls");
		
	for(i = 0; i < n; i++)
		vet3[i] = vet1[i] * vet2[i];
	
	printf("Vetor Resultante:\n");		
	for(i = 0; i < n; i++)
		printf("%d | ", vet3[i]);
			
	return 0;
}
