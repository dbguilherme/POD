#include <stdio.h> 
#include <stdlib.h>
#include <time.h>


void sort(int n, int* vet){
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        //find min index
        for (int j = i + 1; j < n; j++) {
            if (vet[j] < vet[min_index]) {
                min_index = j;

            }
        }

        //swap
        if (min_index != i) {
            int temp = vet[i];
            vet[i] = vet[min_index];
            vet[min_index] = temp;
        }
    }


    printf("sort vector\n");

    //printer
    for (int i=0;i<n;i++){
        printf("%d ", vet[i]);
    }
    printf("\ncontador %i\n", count);
}


int main() 
{ 
    // vector size
    long int n = 100;

    // memory allocation
    int *vet = (int*)malloc(n * sizeof(int));
    srand(time(NULL));

    for (int i=0; i< n; i++){
        vet[i]=(rand()%100);
    }    
    
    clock_t begin = clock();    
    sort(n, vet); 
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("end time: %f\n", time_spent);
    return 0; 
} 




