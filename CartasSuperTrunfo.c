#include <stdio.h>

int main() {
    
    
    // Carta 1 
    char estado = 'R';
    char codigo[20] = "R01"; 
    char nome[50] = "Mutondo"; 
    int populacao = 896744; 
    int NumerodePontosTuristicos = 15; 
    float area = 249; 
    float pib = 20.3; 

    
    printf ("O estado é: ");
    scanf (" %c", &estado);
    printf ("Estado: %c\n", estado);

    printf ("O código é: ");
    scanf ("%s", codigo);
    printf ("Código: %s\n", codigo);

    printf ("O nome da cidade é: ");
    scanf ("%s", nome);
    printf ("Nome da Cidade: %s\n", nome);

    printf ("A população é: ");
    scanf ("%d", &populacao);
    printf ("Populaçao: %d\n", populacao);

    printf ("A área é: ");
    scanf ("%f", &area);
    printf ("Área: %.0f km²\n", area);

    printf ("O PIB é: ");
    scanf ("%f", &pib);
    printf ("PIB: %.1f Bilhões de reais\n", pib);

    printf ("O Número de Pontos Turísticos são: ");
    scanf ("%d", &NumerodePontosTuristicos);
    printf ("Número de Pontos Turísticos: %d\n", NumerodePontosTuristicos);

    // Adicione uma linha em branco entre as cartas
    printf ("\n");

    // Carta 2 
    char estado2 = 'S';
    char codigo2[20] = "S02";
    char nome2[50] = "Itaquaquecetuba";
    int populacao2 = 369275;
    int NumeroDePontosTuristicos2 = 34;
    float area2 = 82.62; 
    float pib2 = 9.521; 

    
    printf ("O estado2 é: ");
    scanf (" %c", &estado2);
    printf ("Estado: %c\n", estado2);

    printf ("O código2 é: ");
    scanf ("%s", codigo2);
    printf ("Código: %s\n", codigo2);

    printf ("O nome da cidade2 é: ");
    scanf ("%s", nome2);
    printf ("Nome da Cidade: %s\n", nome2);

    printf ("A população2 é: ");
    scanf ("%d", &populacao2);
    printf ("População: %d\n", populacao2);

    printf ("A área2 é: ");
    scanf ("%f", &area2);
    printf ("Área: %.2f km²\n", area2);

    printf ("O PIB2 é: ");
    scanf ("%f", &pib2);
    printf ("PIB: %.3f Milhões de reais\n", pib2);

    printf ("O Número de Pontos Turísticos2 são: ");
    scanf ("%d", &NumeroDePontosTuristicos2);
    printf ("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);


    return 0;
}
