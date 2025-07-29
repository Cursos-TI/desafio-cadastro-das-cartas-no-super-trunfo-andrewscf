#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[50];
    int cd_cidade, populacao, pib, n_pt, area;

    char nome2[50];
    int cd_cidade2, populacao2, pib2, n_pt2, area2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Atributos das cartas 01 \n");

    printf("Digite um nome de cidade: ");
    scanf("%s", nome);

    printf("Digite o código da cidade: ");
    scanf("%d", &cd_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);
    
    printf("Digite o PIB: ");
    scanf("%d", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &n_pt);

    printf("Digite a área: ");
    scanf("%d", &area);

    printf("Atributos das cartas 02 \n");

    printf("Digite um nome de cidade: ");
    scanf("%s", &nome2);

    printf("Digite o código da cidade: ");
    scanf("%d", &cd_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite o PIB: ");
    scanf("%d", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &n_pt2);

    printf("Digite a área: ");
    scanf("%d", &area2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(
        "Carta 01 \n Cidade: %s\n Código: %d\n População: %d\n PIB: %d\n, Pontos turísticos: %d\n Área: %d",
        nome,
        cd_cidade,
        populacao,
        pib,
        n_pt,
        area
    );

    printf(
        "Carta 02 \n Cidade: %s\n Código: %d\n População: %d\n PIB: %d\n, Pontos turísticos: %d\n Área: %d",
        nome2,
        cd_cidade2,
        populacao2,
        pib2,
        n_pt2,
        area2
    );

    return 0;
}
