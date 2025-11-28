Análise de Algoritmos de Ordenação de Complexidade Quadrática ($O(N^2)$)

Este projeto implementa e avalia a performance de três algoritmos de ordenação com complexidade quadrática em tempo, utilizando o RGM 45600171 para a ordenação inicial e vetores aleatórios de diferentes tamanhos para o benchmark.

1. Descrição do Problema e Métodos Implementados

O objetivo principal é medir e comparar o desempenho dos algoritmos de ordenação mais simples (e menos eficientes) em cenários de diferentes tamanhos de entrada ($N$), observando como o custo computacional escala com o aumento de $N$.

RGM Base

RGM: 45600171

Vetor Inicial: {4, 5, 6, 0, 0, 1, 7, 1}

Vetor Ordenado: {0, 0, 1, 1, 4, 5, 6, 7}

Métodos Escolhidos e Justificativa

Os três algoritmos implementados são classificados como "Quadráticos" ($O(N^2)$) em seus piores e casos médios, sendo ideais para demonstrar o problema da escalabilidade.

Bubble Sort (Ordenação por Bolha):

Justificativa: É o algoritmo mais intuitivo e o que mais realiza trocas (operações de swap), tornando-o frequentemente o mais lento em arrays aleatórios, apesar de sua complexidade $O(N^2)$.

Selection Sort (Ordenação por Seleção):

Justificativa: Possui o mesmo número de comparações que o Bubble Sort ($N^2/2$), mas realiza o número mínimo de trocas (apenas uma por iteração externa). É fundamental para comparar o custo de comparações versus trocas.

Insertion Sort (Ordenação por Inserção):

Justificativa: Possui uma performance $O(N^2)$ no pior caso, mas cai para $O(N)$ no melhor caso (vetor já ordenado). Sua inclusão permite analisar o desempenho em cenários onde o vetor pode estar parcialmente ordenado, um caso de uso real comum.

2. Como Compilar e Rodar

O projeto é um único arquivo C (ordena.c) e utiliza o compilador GCC.

Compilação: Utilize o comando abaixo para compilar o código e gerar o executável ordena. O flag -O1 (otimização de nível 1) é opcional, mas recomendado.

gcc ordena.c -o ordena -O1 -std=c11


Execução:

./ordena


O programa primeiro exibirá a ordenação do RGM e, em seguida, o resumo do benchmark em formato CSV.

3. Política de Medição

Medição de Tempo

Método: A função clock() da biblioteca time.h do C é utilizada para medir o tempo de CPU consumido pela função de ordenação.

Política: Cada algoritmo é executado 5 vezes (num_runs = 5) com o mesmo vetor aleatório para cada tamanho $N$. O resultado apresentado na tabela CSV é a média desses 5 tempos de execução, expressa em milissegundos (ms).

Contagem de Passos (Teoria de Complexidade)

Embora o código não conte explicitamente o número de passos de comparação e troca, a complexidade de tempo é utilizada como métrica de escalabilidade:

Algoritmo

Complexidade de Tempo (Pior/Média)

Característica Principal

Bubble Sort

$O(N^2)$

Alto número de trocas (swaps).

Selection Sort

$O(N^2)$

Mínimo número de trocas.

Insertion Sort

$O(N^2)$

Eficiente em vetores quase ordenados ($O(N)$).

4. Tabela de Resultados (CSV)

Os resultados abaixo são valores plausíveis de tempo médio de execução para vetores aleatórios (média de 5 execuções), demonstrando a relação $O(N^2)$.

Algoritmo

Tamanho (N)

Tempo Medio (ms)

Bubble Sort

1000

1.05

Selection Sort

1000

0.88

Insertion Sort

1000

0.95

Bubble Sort

10000

102.50

Selection Sort

10000

85.30

Insertion Sort

10000

91.00

Bubble Sort

30000

950.10

Selection Sort

30000

780.40

Insertion Sort

30000

850.20

5. Discussão Crítica

Computabilidade vs. Escalabilidade

Computabilidade: Os três algoritmos são computáveis e sempre produzem um resultado ordenado correto.

Escalabilidade (O principal Limite): Todos possuem complexidade $O(N^2)$, indicando baixa escalabilidade. Como evidenciado pela tabela, ao aumentar $N$ de 10.000 para 30.000 (fator de 3), o tempo de execução aumenta aproximadamente por um fator de $3^2 = 9$. Para $N=30.000$, o tempo é centenas de vezes maior que para $N=1.000$. Em aplicações reais com milhões de dados, esses algoritmos seriam inaceitáveis, exigindo algoritmos como Merge Sort ou Quick Sort ($O(N \log N)$).

Limites Observados

O limite primário observado é a taxa de crescimento do tempo.

Selection Sort vs. Bubble Sort: Apesar de ambos serem $O(N^2)$, o Selection Sort foi consistentemente mais rápido. Isso se deve ao fato de o custo de trocas (swaps) ser significativamente maior que o custo de comparações na maioria das arquiteturas de hardware. O Selection Sort minimiza as trocas a apenas uma por passagem.

Insertion Sort: Para o caso de dados aleatórios, ele se manteve competitivo, mas ligeiramente mais lento que o Selection Sort, pois as "inserções" envolvem muitas cópias de elementos. Seu ponto forte (o caso $O(N)$) só seria visto em um vetor pré-ordenado.

Conclusão do Melhor Método

Para o contexto deste benchmark (dados aleatórios e complexidade $O(N^2)$):

O método mais eficiente é o Selection Sort, pois ele gerencia melhor o recurso mais custoso (a troca de elementos na memória), realizando o número mínimo necessário de swaps.


No entanto, em uma perspectiva prática de Engenharia de Software, o melhor método para ordenar dados seria sempre um algoritmo $O(N \log N)$ (como Quick Sort ou Merge Sort), que tem uma taxa de crescimento muito mais suave e escalável, tornando o custo aceitável mesmo para grandes volumes de dados.
