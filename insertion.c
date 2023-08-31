#include <stdio.h> 
#include <stdlib.h>
#include <time.h>


void sort(int n, int* ptr){

    int i,j, min, t;
    int contador=0;
    for (i = 1; i < n; i++) {   
        
        min=ptr[i];
        for (j=i; j>=1 && min< ptr[j-1];j--){
            ptr[j]=ptr[j-1];
           
        }
        if (i-j>0)
           contador=i-j;
        ptr[j]=min;
    }
    printf("sort vector\n");
    for (int i=0;i<n;i++){
        printf("%d ", ptr[i]);

    }
    printf("contador %i", contador);
}


int main() 
{ 
    // vector size
    long int n = 5; 
    // memory allocation

    int *vet = (int*)malloc(n * sizeof(int));
    srand(time(NULL));

    vet[0]=3;
    vet[1]=4;
    vet[2]=5;
    vet[3]=6;
    vet[4]=7;
    // for (int i=0; i< n; i++){
    //     vet[i]=(rand()%100);
    // }    
    
    clock_t begin = clock();    
    sort(n, vet); 
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\n end time: %f", time_spent);
    return 0; 
} 

// Crie uma variável para indicar quantas operações de troca foi executado pelo algortimo de buble e pelo Insertion. Para a mesma entrada de 10000 elementos quantas trocas foram realizadas? 

