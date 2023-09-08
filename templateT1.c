/**
 * @file nome_do_arquivo.c
 * @author Nome_do_Aluno
 * @version 0.3
 * @date 2023-08-28
 *
 * @copyright Copyright (c) 2023
 *
 *
  * Atenção: Antes de entregar, conferir se dos dados acima da documentação estão
 * preenchidos corretamente.
 *
 */
#include <stdio.h>

void copia(int *A, int *v, int size);
void bubbleSort(int *A, int size);
// void selectionSort(int *A, int size);
// void insertionSort(int *A, int size);
// void quickSort(int *A, int size);


int main(){

	int i;
	int vetor[] = {1, 20, -10, 30, 5, 7};
	int tamanhoVetor = (int)sizeof(vetor)/sizeof(int);

	printf("\nVetor original: ");
	for (i = 0 ; i < tamanhoVetor ; i++)
    	printf("%d ", vetor[i]);

	printf("\nVetor tamanho = %d\n", tamanhoVetor);

	// bubble sort
	int bubbleVec[tamanhoVetor];
	copia(vetor, bubbleVec, tamanhoVetor);
	bubbleSort(bubbleVec, tamanhoVetor);
	printf("\nBubble sort: ");
	for (i = 0 ; i < tamanhoVetor ; i++)
    	printf("%d ", bubbleVec[i]);
	printf("\n");

	// selection sort

	// insertion sort

	// quick sort

	return 0;
}

void copia(int *A, int *V, int size){
	int i;
	for (i = 0 ; i < size ; i++)
    	     V[i] = A[i];
}

void bubbleSort(int *A, int size){
   // implementação do Bubble

}





