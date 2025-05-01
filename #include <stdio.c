#include <stdio.h>

int main(){

    int carta1;
    int carta2;
    char estado1 [10];
    char estado2 [50];
    char cidade1 [50];
    char cidade2 [50];
    char codigo2 [50];
    char codigo1 [50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float PIB1;
    float PIB2;
    int numerodepontosturisticos1;
    int numerodepontosturisticos2;

    printf("digite o numero da carta: ");
    scanf("%d",&carta1);

    printf("digite o estado: ");
    scanf("%s",&estado1);

    printf("digite a cidade: ");
    scanf("%s",&cidade1);

    printf("digite o codigo: ");
    scanf("%s",&codigo1);

    printf("digite a populacao: ");
    scanf("%d",&populacao1);

    printf("digite a area Km²: ");
    scanf("%f",&area1);

    printf("digite o PIB: ");
    scanf("%f",&PIB1);

    printf("digite o numero de pontos turiticos: ");
    scanf("%d", &numerodepontosturisticos1);


    printf("carta:%d\n", carta1);
    printf("estado:%s\n", estado1);
    printf("cidade:%s\n", cidade1);
    printf("codigo:%s\n", codigo1);
    printf("populacao:%d\n", populacao1);
    printf("area:%.2f\n", area1);
    printf("PIB:%.2f\n", PIB1);
    printf("numero de pontos turisticos:%d\n", numerodepontosturisticos1);

    printf("digite o numero da carta:");
    scanf("%d", &carta2);

    printf("digite o estado:");
    scanf("%s", &estado2);

    printf("digite a cidade:");
    scanf("%s", &cidade2);

    printf("digite o codigo:");
    scanf("%s", &codigo2);

    printf("digite a populacao:");
    scanf("%d", &populacao2);

    printf("digite a area:");
    scanf("%f", &area2);

    printf("digite o PiB:");
    scanf("%f", &PIB2);

    printf("digite o numero de pontos turisticos:");
    scanf("%d", &numerodepontosturisticos2);

    printf("carta: %d\n", carta2);
    printf("estado: %s\n", estado2);
    printf("cidade: %s\n", cidade2);
    prinf("codigo: %s\n", codigo2);
    print("populacao: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    print("PIB: %.2f\n", PIB2);
    printf("numero de pontos turisticos: %d\n", numerodepontosturisticos2);

    


    
    return 0;
}
