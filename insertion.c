#include <stdio.h>
#include <stdlib.h>

// Função para ordenar um arquivo e obter o número de iterações do Insertion Sort
int Insertion(const char *nomeArquivo, int *array, int tamanho) {
    int numComparacoes = 0; // Variável para contar o número de comparações
    int numTrocas = 0;      // Variável para contar o número de trocas

    for (int i = 1; i < tamanho; i++) {
        int chave = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > chave) {
            numComparacoes++;  // Incrementa o contador de comparações
            array[j + 1] = array[j];
            j--;
            numTrocas++;  // Incrementa o contador de trocas
        }

        array[j + 1] = chave;
    }

    return numComparacoes + numTrocas;
}


int main {

  printf(Insertion);
return 0;
}
