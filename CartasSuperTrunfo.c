#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Felipe

int main() {
//Variaveis cadastradas
   int População, Turistico;
   float Area, PIB;
   char Codigo[50];
   char Cidade [50];
   char Estado [50];
//Coleta de dados da primeira carta solicitando nome do Estado ao usuario
   printf("Vamos cadastrar os dados da Carta 1?\n");
   printf("Então digite o nome do Estado da carta 1:\n");
   scanf("%s", &Estado);
//coleta de informacoes do codigo da carta ao usuario
   printf("Informe o código da carta 1:\n");
   scanf("%s", &Codigo);
//coleta do nome da cidade junto ao usuario
   printf("Digite agora o nome da Cidade da carta 1:\n");
   scanf("%s", &Cidade);
//coleta da populacao da cidade 
   printf("Preciso agora da população da carta 1, digite:\n");
   scanf("%d", &População);
//coleta da area em km² junto ao usuario
   printf("Qual a área em km² da carta 1:\n");
   scanf("%f", &Area);
//coleta do PIB junto ao usuario
   printf("Informe o PIB da carta 1:\n");
   scanf("%f", &PIB);
//coleta doo numero de quantidade de pontos turisticos junto ao usuario
   printf("Quantos pontos turístico temos:\n");
   scanf("%d", &Turistico);
//imprimindo todas as informacoes que o usuario passou para a carta 1
   printf("Carta 01:\n");
   printf("Estado: %s\n", Estado);
   printf("Código: %s\n", Codigo);
   printf("Nome da Cidade: %s\n", Cidade);
   printf("População: %d\n", População);
   printf("Área: %.2f km²\n", Area);
   printf("PIB: %.2f bilhões de reais\n", PIB);
   printf("Número de Pontos Turísticos: %d\n", Turistico);
   
//coletando os dados para a carta 2, assim como foi feito na carta 1   
   printf("Vamos cadastrar os dados da Carta 2?\n");
   printf("Então digite o nome do Estado da carta 2:\n");
   scanf("%s", &Estado);

   printf("Informe o código da carta 2:\n");
   scanf("%s", &Codigo);

   printf("Digite agora o nome da Cidade da carta 2:\n");
   scanf("%s", &Cidade);

   printf("Preciso agora da população da carta 2, digite:\n");
   scanf("%d", &População);

   printf("Qual a área em km² da carta 2:\n");
   scanf("%f", &Area);

   printf("Informe o PIB da carta 2:\n");
   scanf("%f", &PIB);
   
   printf("Quantos pontos turístico temos:\n");
   scanf("%d", &Turistico);
//impressao de todos os dados coletados com o usuario para a carta 2 
   printf("Carta 02:\n");
   printf("Estado: %s\n", Estado);
   printf("Código: %s\n", Codigo);
   printf("Nome da Cidade: %s\n", Cidade);
   printf("População: %d\n", População);
   printf("Área: %.2f km²\n", Area);
   printf("PIB: %.2f bilhões de reais\n", PIB);
   printf("Número de Pontos Turísticos: %d\n", Turistico);
   
   

   return 0;
}