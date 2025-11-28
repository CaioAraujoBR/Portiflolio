#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// --- Protótipos das Funções ---
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
void copyArray(int source[], int dest[], int n);
void generateRandomArray(int arr[], int n, int max_val);
void runBenchmark(void (*sortFunc)(int[], int), char *funcName, int arr[], int n, int runs);
void printArray(int arr[], int n);

// --- 1. Bubble Sort (Ordenação por Bolha) ---
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// --- 2. Selection Sort (Ordenação por Seleção) ---
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// --- 3. Insertion Sort (Ordenação por Inserção) ---
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i]; 
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// --- Funções Auxiliares ---

// Copia o conteúdo do array de origem para o array de destino
void copyArray(int source[], int dest[], int n) {
    for (int i = 0; i < n; i++) {
        dest[i] = source[i];
    }
}

// Gera um array com valores inteiros aleatórios
void generateRandomArray(int arr[], int n, int max_val) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % max_val;
    }
}

// Executa o benchmark e IMPRIME O RESULTADO NO FORMATO CSV
void runBenchmark(void (*sortFunc)(int[], int), char *funcName, int arr[], int n, int runs) {
    clock_t start, end;
    double total_time = 0;
    int *temp_arr = (int *)malloc(n * sizeof(int));
    
    if (temp_arr == NULL) {
        // Tratar erro de alocação de memória
        return;
    }

    // Executa o algoritmo 'runs' vezes para calcular a média
    for (int r = 0; r < runs; r++) {
        copyArray(arr, temp_arr, n); 
        
        start = clock();
        sortFunc(temp_arr, n);
        end = clock();
        
        total_time += ((double) (end - start)) / CLOCKS_PER_SEC;
    }

    // Tempo médio em milissegundos
    double avg_time_ms = (total_time / runs) * 1000; 

    // Saída CSV: Algoritmo, Tamanho (N), Tempo Médio (ms)
    // O ponto flutuante será impresso com precisão de 6 casas decimais
    printf("%s,%d,%.6f\n", funcName, n, avg_time_ms);

    free(temp_arr);
}

// Imprime um array (usado para o RGM)
void printArray(int arr[], int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("}");
}

// --- Função Principal (main) ---
int main() {
    srand(time(NULL));

    // --- Ordenação do RGM (Demonstração) ---
    int rgm_array[] = {4, 5, 6, 0, 0, 1, 7, 1};
    int rgm_n = 8;
    int rgm_sorted[rgm_n];

    printf("## Resultados da Ordenação do RGM (45600171)\n");
    printf("> Vetor inicial: ");
    printArray(rgm_array, rgm_n);
    printf("\n");

    // Teste com Bubble Sort
    copyArray(rgm_array, rgm_sorted, rgm_n);
    bubbleSort(rgm_sorted, rgm_n);
    printf("Bubble Sort   -> ");
    printArray(rgm_sorted, rgm_n);
    printf("\n");
    
    // Teste com Selection Sort
    copyArray(rgm_array, rgm_sorted, rgm_n);
    selectionSort(rgm_sorted, rgm_n);
    printf("Selection Sort-> ");
    printArray(rgm_sorted, rgm_n);
    printf("\n");

    // Teste com Insertion Sort
    copyArray(rgm_array, rgm_sorted, rgm_n);
    insertionSort(rgm_sorted, rgm_n);
    printf("Insertion Sort-> ");
    printArray(rgm_sorted, rgm_n);
    printf("\n\n");
    
    // --- Benchmark CSV ---
    printf("## Resumo do Benchmark (CSV)\n");
    
    // Cabeçalho CSV
    printf("Algoritmo,Tamanho (N),Tempo Medio (ms)\n");

    // Vetores de teste com diferentes tamanhos N
    int sizes[] = {1000, 10000, 30000}; 
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);
    int max_value = 10000;
    int num_runs = 5;

    for (int i = 0; i < num_sizes; i++) {
        int n = sizes[i];
        int *random_arr = (int *)malloc(n * sizeof(int));
        
        if (random_arr == NULL) {
            continue; // Se falhar, pula o tamanho
        }

        generateRandomArray(random_arr, n, max_value);

        // Executa os 3 métodos e imprime CSV
        runBenchmark(bubbleSort, "Bubble Sort", random_arr, n, num_runs);
        runBenchmark(selectionSort, "Selection Sort", random_arr, n, num_runs);
        runBenchmark(insertionSort, "Insertion Sort", random_arr, n, num_runs);

        free(random_arr);
    }

    return 0;
}
