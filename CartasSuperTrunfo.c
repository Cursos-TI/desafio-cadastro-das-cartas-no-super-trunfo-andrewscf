#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    struct Carta
    {
        char estado;
        char nome[50];
        int cd_cidade, populacao, n_pt;
        float pib, area, densidade, pibperc
    };

    struct Carta Carta1;
    struct Carta Carta2;
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Atributos das cartas 01 \n");

    printf("Digite a letra do estado: ");
    scanf("%c", &Carta1.estado);

    printf("Digite um nome de cidade: ");
    scanf("%s", Carta1.nome);

    printf("Digite o código da cidade: ");
    scanf("%d", &Carta1.cd_cidade);

    printf("Digite a população: ");
    scanf("%d", &Carta1.populacao);
    
    printf("Digite o PIB: ");
    scanf("%f", &Carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Carta1.n_pt);

    printf("Digite a área: ");
    scanf("%f", &Carta1.area);

    printf("Atributos das cartas 02 \n");

    printf("Digite a letra do estado: ");
    scanf("%c", &Carta2.estado);

    printf("Digite um nome de cidade: ");
    scanf("%s", Carta2.nome);

    printf("Digite o código da cidade: ");
    scanf("%d", &Carta2.cd_cidade);

    printf("Digite a população: ");
    scanf("%d", &Carta2.populacao);
    
    printf("Digite o PIB: ");
    scanf("%f", &Carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Carta2.n_pt);

    printf("Digite a área: ");
    scanf("%f", &Carta2.area);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    Carta1.densidade = (float) Carta1.populacao / Carta1.area;
    Carta1.pibperc = (float) Carta1.pib / Carta1.populacao;

    Carta2.densidade = (float) Carta2.populacao / Carta2.area;
    Carta2.pibperc = (float) Carta2.pib / Carta2.populacao;

    printf(
        "Carta 01 \n Cidade: %s\n Código: %d\n População: %d\n PIB: %.2f\n, Pontos turísticos: %d\n Área: %.2f\n Densidade: %.2f\n PIB per Capita: %.2f\n",
        Carta1.nome,
        Carta1.cd_cidade,
        Carta1.populacao,
        Carta1.pib,
        Carta1.n_pt,
        Carta1.area,
        Carta1.densidade,
        Carta1.pibperc
    );

    printf(
        "Carta 02 \n Cidade: %s\n Código: %d\n População: %d\n PIB: %.2f\n, Pontos turísticos: %d\n Área: %.2f\n Densidade: %.2f\n PIB per Capita: %.2f\n",
        Carta2.nome,
        Carta2.cd_cidade,
        Carta2.populacao,
        Carta2.pib,
        Carta2.n_pt,
        Carta2.area,
        Carta2.densidade,
        Carta2.pibperc
    );

    return 0;

    
}