#include <stdio.h>
#include <locale.h>
#include <float.h>


int main () {
	setlocale(LC_ALL, "Portuguese");
	int n, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	float vet[n], menor = FLT_MAX;
	
	for(i = 0; i < n; i++){
		printf("Digite o %d° valor: ", i + 1);
		scanf("%f", &vet[i]);
		
		if( vet[i] < menor){
			menor = vet[i];
		}
	}
	 printf("Menor valor: %.1f \n", menor);
	 
	 for(i = 0; i < n; i++)
	 	printf("%.1f | ", vet[i]);
			
	return 0;
}
