#include <stdio.h>
#define NUM_DIAS 3 // Número de dias no mês (ajuste conforme necessário)

int main() {
    // Declaração de variáveis
    double dados[NUM_DIAS][2]; // Array para armazenar os dados meteorológicos
    double temperatura_maxima_media = 0.0, temperatura_minima_media = 0.0;
    double maior_amplitude_termica = 0.0;
    int dia_maior_amplitude_termica = 1;
    int dias_abaixo_limiar = 0;
    double limiar = 10.0; // Limiar de temperatura mínima

    // Leitura dos dados
    printf("Por favor, insira os dados meteorológicos (temperatura máxima e mínima) para cada dia do mês:\n");

    for (int i = 0; i < NUM_DIAS; i++) {
        printf("Dia %d (temperatura máxima e mínima separadas por espaço): ", i + 1);
        scanf("%lf %lf", &dados[i][0], &dados[i][1]);

        // Cálculo das temperaturas médias
        temperatura_maxima_media += dados[i][0];
        temperatura_minima_media += dados[i][1];

        // Cálculo da amplitude térmica
        double amplitude_termica = dados[i][0] - dados[i][1];
        if (amplitude_termica > maior_amplitude_termica) {
            maior_amplitude_termica = amplitude_termica;
            dia_maior_amplitude_termica = i + 1; // Dia base 1, não zero
        }

        // Verificação de temperatura mínima abaixo do limiar
        if (dados[i][1] < limiar) {
            dias_abaixo_limiar++;
        }
    }

    // Cálculo das médias
    temperatura_maxima_media /= NUM_DIAS;
    temperatura_minima_media /= NUM_DIAS;
    
    // Exibição dos resultados
    printf("a) Temperatura média máxima do mês: %.2lf\n", temperatura_maxima_media);
    printf("b) Temperatura média mínima do mês: %.2lf\n", temperatura_minima_media);
    printf("c) Dia com maior amplitude térmica (diferença entre temperatura máxima e mínima): Dia %d\n", dia_maior_amplitude_termica);
    printf("d) Número de dias com temperatura mínima abaixo de %.2lf°C: %d\n", limiar, dias_abaixo_limiar);

    return 0;
}
