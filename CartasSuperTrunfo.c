#include <stdio.h>

// Olá, me chamo Natalia Silva. Este é o desafio Cartas Super Trunfo da disciplina Introdução à Programação.
// Desafio Novato: Cadastrando as Cartas do Super Trunfo.

int main() {
    // Declarando as variáveis.
    char estado1, estado2; 
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;

    // Instruções para o usuário inserir os dados de cada carta com printf. Leitura e armazenamento dos dados nas variáveis com a função scanf.
    // Aplicação dos especificadores de formato.

    printf("Cadastro da Carta 1\n");
    printf("Digite uma letra de A a H para representar o Estado da Carta 1:\n");
    scanf(" %c", &estado1);

    printf("Digite um código de três dígitos, inicando com a letra escolhida acima, seguida de dois números:\n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da Cidade. Em caso de nome composto, digitar apenas o primeiro nome, ou tudo junto, sem espaços.\n");
    scanf(" %s", &cidade1);

    printf("Digite o número de habitantes da Cidade:\n");
    scanf(" %d", &populacao1);

    printf("Digite a Área da Cidade:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da Cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da Cidade:\n");
    scanf(" %d", &ponto1);

    // Instruções para a Carta 2.

    printf("Cadastro da Carta 2\n");
    printf("Digite uma letra de A a H (diferente da letra escolhida para a Carta 1) que represente o Estado da Carta 2:\n");
    scanf(" %c", &estado2);

    printf("Digite um código de três dígitos, começando com a letra escolhida acima:\n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da Cidade. Em caso de nome composto, digitar apenas o primeiro nome, ou tudo junto, sem espaços.\n");
    scanf(" %s", &cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área da Cidade:\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da Cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite o número de Pontos Turísticos da Cidade:\n");
    scanf(" %d", &ponto2);

    // Finalizado o cadastro das cartas. Mostrarei as informações na tela com printf.

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto1);

    // Informações da Carta 2 com printf.

    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n");

    printf("FIM DO DESAFIO. ATÉ A PRÓXIMA!\n");

    return 0;

}
