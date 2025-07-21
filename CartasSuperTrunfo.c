#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[15], estado2[15];
    char codigoDaCarta[5], codigoDaCarta2[5];
    char nomeDaCidade[20], nomeDaCidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Solicitando os Dados da Primeira Carta
    printf("*** Jogo Super Trunfo - Países ***\n");

    printf("\n*** Primeira Carta ***\n");

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código da cidade: ");
    scanf("%s", codigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    // Separador de Cartas
    printf("\n\n*** Segunda Carta ***\n");
    
    // Solicitando os  Dados da Degunda Carta
    printf("Digite o estado: ");
    scanf("%s", estado2);
    
    printf("Digite o código da cidade: ");
    scanf("%s", codigoDaCarta2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade2);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados da Primeira Carta:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n*** Sua Primeira Carta ***\n");
    
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // Separador de Exibição das Cartas
    printf("\n*** Sua Segunda Carta ***\n");

    // Exibição dos Dados da  Segunda Carta
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
