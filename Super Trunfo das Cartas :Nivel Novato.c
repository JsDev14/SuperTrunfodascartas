#include <stdio.h>

int main(){
    char estado[10]; 
    char estado2[10];
    char codigocarta[50];
    char codigocarta2[50];
    char nomeCidade[50];
    char nomeCidade2[50];
    int populacao, populacao2;
    float areakm, areakm2, pib, pib2;
    int pontosturisticos, pontosturisticos2;

    printf("Carta 1:\n");

    printf("Estado: \n");
    scanf("%s",&estado);

    printf("Código:\n");
    scanf("%s",&codigocarta);
    
    printf("Nome da Cidade:\n");
    scanf("%s",&nomeCidade);

    printf("População:\n");
    scanf("%d",&populacao);

    printf("Área: \n");
    scanf("%f", &areakm);

    printf("Pib:\n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("*********************************\n");

    printf("Carta 2:\n");

    printf("Estado: \n");
    scanf("%s",&estado2);

    printf("Código:\n");
    scanf("%s",&codigocarta2);
    
    printf("Nome da Cidade:\n");
    scanf("%s",&nomeCidade2);

    printf("População:\n");
    scanf("%d",&populacao2);

    printf("Área: \n");
    scanf("%f",&areakm2);

    printf("Pib:\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("****************************\n");

    printf("Carta 01:\n");
    printf("Estado: %s\n",&estado);
    printf("Código: %s\n",&codigocarta);
    printf("Nome da Cidade: %s\n",&nomeCidade);
    printf("População: %d\n",&populacao);
    printf("Área: %f\n","Km",&areakm);
    printf("Pib: %f\n","Bilhões de reais", &pib);
    printf("Número de Pontos Turísticos: %d\n", &pontosturisticos);
    
    printf("****************************\n");

     printf("Carta 02:\n");
    printf("Estado: %s\n",&estado2);
    printf("Código: %s\n",&codigocarta2);
    printf("Nome da Cidade: %s\n",&nomeCidade2);
    printf("População: %d\n",&populacao2);
    printf("Área: %f\n","Km",&areakm2);
    printf("Pib: %f\n","Bilhões de reais", &pib2);
    printf("Número de Pontos Turísticos: %d\n", &pontosturisticos2);



    
}