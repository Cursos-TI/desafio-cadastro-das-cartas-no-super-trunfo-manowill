#include <stdio.h>
#include <Windows.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //variaveis carta 01
    char estado1;
    char cidade1[15];
    float area1;
    unsigned long int populacao1;
    float pib1;
    int turisticos1;
    float densidadepopulacional1;  //populacao dividido pela area
    float pibpercapta1;           // Divida o PIB da cidade pela sua população
    float SuperPoder1;

    //codigo
    int codigo;

    //variaveis carta 2
    char estado2;
    char cidade2[15];
    float area2;
    unsigned long int populacao2;
    float pib2;
    int turisticos2;
    float densidadepopulacional2; //populacao dividido pela area
    float pibpercapta2;          // Divida o PIB da cidade pela sua população
    float SuperPoder2;

    //começou o jogo
    printf("****************super trunfo****************\n\n");

    //pede carta 01
    printf("digite o estado da cidade(Apenas um caractere): "); scanf("%c", &estado1);
    printf("digite o nome da cidade: "); scanf("%s", &cidade1);
    printf("digite o numero da populaçao: "); scanf("%lu", &populacao1);
    printf("digite o numero da area: "); scanf("%f", &area1);
    printf("digite o numero do pib: "); scanf("%f", &pib1);
    printf("digite o numero de pontos turisticos: "); scanf("%d", &turisticos1);
    printf("\n\n");

    //pede carta 2
    printf("digite o estado da cidade 2 (Apenas um caractere) : "); scanf(" %c", &estado2);
    printf("digite o nome da cidade 2: "); scanf("%s", &cidade2);
    printf("digite o numero da populaçao: "); scanf("%lu", &populacao2);
    printf("digite o numero da area 2: "); scanf("%f", &area2);
    printf("digite o numero do pib: "); scanf("%f", &pib2);
    printf("digite o numero de pontos turisticos: "); scanf("%d", &turisticos2);
    printf("\n\n");

    //mostra carta 1

    codigo = 1;//codigo 1

    printf("Carta 01:\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%d\n", estado1, codigo);
    printf("Nome da cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", turisticos1);

    densidadepopulacional1 =  populacao1 / area1; //populacao dividido pela area
    pibpercapta1 = pib1 / populacao1;            //pib pela populacao

    printf("densidade populacional (Atributo especial quanto menor maior o poder!!): %f habitantes por quilômetro quadrado\n", densidadepopulacional1);
    printf("Pib per capta: %.2f\n\n", pibpercapta1);

    //super poder soma de todos atributos e o inverso da densidade populacional
    SuperPoder1 = populacao1 + area1 + pib1 + turisticos1 + pibpercapta1 + ( area1 / populacao1);
    printf("O poder %s é : %f\n\n", cidade1 ,SuperPoder1);

    printf("\n\n");
    
    //mostra carta 2

    codigo = 2;//codigo 2
     
    printf("Carta 02:\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%d\n", estado2, codigo);
    printf("Nome da cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", turisticos2); 

    densidadepopulacional2 = populacao2 / area2; //populacao dividido pela area
    pibpercapta2 = (float) pib2 / populacao2;    // pib divido pela população
             
    printf("densidade populacional (Atributo especial quanto menor maior o poder!!): %f  habitantes por quilômetro quadrado\n", densidadepopulacional2);
    printf("Pib per capta: %f\n\n", pibpercapta2);

    //super poder soma de todos atributos e o inverso da densidade populacional
    SuperPoder2 = populacao2 + area2 + pib2 + turisticos2 + pibpercapta2 + ( area2 / populacao2);
    printf("O poder da %s : %f\n\n", cidade2 ,SuperPoder2);

    printf("\n\n");


    //comparação final
    printf("Chegou a grande hora, a hora da batalha! Vamos comparar os atributos lembre-se 1 é verdadeiro e 0 e falso*************************************\n\n");
    Sleep(3000);
    printf("A carta 1: %s ganhou a cidade 2: %s no numero de população? %d \n\n", cidade1, cidade2, (populacao1 > populacao2));
    Sleep(3000);

    printf("A carta 1: %s ganhou a cidade 2: %s no numero de area? %d \n\n", cidade1, cidade2, (area1 > area2));
    Sleep(3000);

    printf("A carta 1: %s ganhou a cidade 2: %s no numero do pib? %d \n\n", cidade1, cidade2, (pib1 > pib2));
    Sleep(3000);

    printf("A carta 1: %s ganhou a cidade 2: %s no numero de pontos turisticos? %d \n\n", cidade1, cidade2, (turisticos1 > turisticos2));
    Sleep(3000);

    printf("Agora vamos calcular a densidade populacional! lembre-se a menor densidade populacional \n");
    printf("A carta 1: %s rem uma menor densidade populacional que a cidade 2: %s? %d \n\n", cidade1, cidade2, (densidadepopulacional1 < densidadepopulacional2));
    Sleep(3000);

    printf("A carta 1: %s ganhou a cidade 2: %s no pib percapta? %d \n\n", cidade1, cidade2, (pibpercapta1 > pibpercapta2));
    Sleep(3000);

    printf("Agora vamos o super poder que é a soma de todos atributos + o inverso da densidade populacional!  \n");
    Sleep(4000);
    
    printf("O super poder da cidade 1: %s, é maior que a cidade o super poder da cidade 2: %s? %d", cidade1, cidade2, (SuperPoder1 > SuperPoder2));




    return 0;
}