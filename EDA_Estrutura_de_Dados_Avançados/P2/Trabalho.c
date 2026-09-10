// Componentes do grupo: Carlos Henrique Serpa, Evandro Rodrigues, Lucas dos Santos, Matheus Belmonte, Pablo Dantier

#include <stdio.h>
#include <stdlib.h>

// Define um tamanho máximo para o grafo para evitar o uso de ponteiros complexos (malloc)
#define MAX_VERTICES 100

// Variáveis globais
int numero_vertices;
int numero_arestas;
int matriz_adjacencia[MAX_VERTICES][MAX_VERTICES];
int melhor_cobertura[MAX_VERTICES];
int tamanho_melhor_cobertura;
int cobertura_atual[MAX_VERTICES];

// Função que verifica se a combinacao atual de vértices cobre todas as arestas
// Retorna 1 (verdadeiro) ou 0 (falso)
int verifica_se_cobre_todas_arestas()
{
    for (int i = 0; i < numero_vertices; i++)
    {
        for (int j = i + 1; j < numero_vertices; j++)
        {
            // Se existe uma aresta entre o vértice 'i' e o vértice 'j'
            if (matriz_adjacencia[i][j] == 1)
            {
                // Se nem o vértice 'i' nem o 'j' estao na cobertura atual, é invalido
                if (cobertura_atual[i] == 0 && cobertura_atual[j] == 0)
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

// Função recursiva baseada em Backtracking
void encontrar_cobertura_minima(int vertice_atual, int tamanho_atual)
{
    // Poda: se o tamanho atual já for maior ou igual ao melhor encontrado, aborta este caminho
    if (tamanho_atual >= tamanho_melhor_cobertura)
    {
        return;
    }

    // Caso base: se avaliamos todos os vértices
    if (vertice_atual == numero_vertices)
    {
        // Verifica se a configuracao atual forma uma cobertura valida
        if (verifica_se_cobre_todas_arestas() == 1)
        {
            // Atualiza a melhor cobertura encontrada
            tamanho_melhor_cobertura = tamanho_atual;
            for (int i = 0; i < numero_vertices; i++)
            {
                melhor_cobertura[i] = cobertura_atual[i];
            }
        }
        return;
    }

    // Decisão 1: Incluir o vértice atual na cobertura
    cobertura_atual[vertice_atual] = 1;
    encontrar_cobertura_minima(vertice_atual + 1, tamanho_atual + 1);

    // Decisão 2: Não incluir o vértice atual na cobertura
    cobertura_atual[vertice_atual] = 0;
    encontrar_cobertura_minima(vertice_atual + 1, tamanho_atual);
}

int main()
{
    char nome_arquivo[100];
    FILE *arquivo;

    printf("Digite o nome do arquivo .txt contendo o grafo: ");
    scanf("%s", nome_arquivo);

    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL)
    {
        printf("CALMA, ta ansioso!.\n");
        return 1;
    }

    // Leitura da primeira linha: número de vértices e arestas
    fscanf(arquivo, "%d %d", &numero_vertices, &numero_arestas);

    // Inicializa a melhor cobertura com um valor acima do máximo possível
    tamanho_melhor_cobertura = numero_vertices + 1; 

    // Zera os vetores de controle
    for (int i = 0; i < numero_vertices; i++)
    {
        melhor_cobertura[i] = 0;
        cobertura_atual[i] = 0;
    }

    // Leitura da matriz de adjacência do arquivo
    for (int i = 0; i < numero_vertices; i++)
    {
        for (int j = 0; j < numero_vertices; j++)
        {
            fscanf(arquivo, "%d", &matriz_adjacencia[i][j]);
        }
    }

    fclose(arquivo);

    // Chama a função recursiva começando do vértice 0 e com tamanho inicial 0
    encontrar_cobertura_minima(0, 0);

    // Exibição dos resultados
    printf("\nTamanho da Cobertura Minima de Vertices: %d\n", tamanho_melhor_cobertura);
    printf("Vertices que compoem a cobertura minima: { ");
    for (int i = 0; i < numero_vertices; i++)
    {
        if (melhor_cobertura[i] == 1)
        {
            printf("%d ", i);
        }
    }
    printf("}\n");

    return 0;
}