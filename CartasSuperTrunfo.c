#include <stdio.h>

int main(){
    char estado[21];
    char codigo_carta[10];
    char nome_cidade[32];
    int populacao, pontos_turisticos;
    float area_km, pib, densidade_populacional, pib_per_capita;

    printf("----------SUPER TRUNFO----------\n");
    printf("Digite o ESTADO: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta);
    printf("Digite o nome de uma cidade do estado: ");
    scanf("%s", nome_cidade);
    printf("Digite a população do estado: ");
    scanf("%i", &populacao);
    printf("Digite o numero de pontos turisticos do estado: ");
    scanf("%i", &pontos_turisticos);
    printf("Digite a area do estado em KM: ");
    scanf("%f", &area_km);
    printf("Digite o PIB do estado: ");
    scanf("%f", &pib);

    densidade_populacional = (float) populacao / area_km;
    pib_per_capita = pib / (float) populacao;

    printf("O estado é %s\n", estado);
    printf("O codigo da carta é %s\n", codigo_carta);
    printf("O nome de uma cidade é %s\n", nome_cidade);
    printf("A população do estado é %i\n", populacao);
    printf("O estado tem %i pontos turisticos\n", pontos_turisticos);
    printf("O estado tem %.2fKM de area\n", area_km);
    printf("O PIB do estado é de %.2f\n", pib);
    printf("A densidade populacional do estado é de %.2f\n", densidade_populacional);
    printf("O pib per capita do estado é de %.2f\n", pib_per_capita);
    return 0;
}
