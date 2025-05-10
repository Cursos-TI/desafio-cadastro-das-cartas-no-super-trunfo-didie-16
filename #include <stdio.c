#include <stdio.h>

int main(){

    int carta;
    char estado[50];
    char codigo[10];   //sao as variaveis com os seus respectivos nomes para armazenar os dados
    char cidade[50];   //ajudar na compreensão do codigo 
    int populacao;
    float area;
    float PIB;
    int numerodepontosturisticos;
    float densidadepopulacional;
    float PIBpercapita;


    int CARTA1;
    char ESTADO1 [50];   //são as variaveis da segunda carta e seus respectivos nomes 
    char CODIGO1 [10];
    char CIDADE1[50];
    int POPULACAO1;
    float AREA1;
    float PIB1;
    int NUMERODEPONTOSTURISTICOS1;
    float DENSIDADEPOPULACIONAL1;
    float PIBPERCAPITA1;
    
    //entrda e saida de dados com a interacao do usuario
    
    printf("numero da carta:");
    scanf("%d",&carta);

    printf("digite o estado:");
    scanf("%s",estado);

    printf("digite o codigo:");
    scanf("%s",&codigo);

    printf("digite a cidade:");
    scanf("%s",&cidade);

    printf("digite a populacao:");
    scanf("%d",&populacao);

    printf("digita a area:");
    scanf("%f",&area);

    printf("digite o PIB:");
    scanf("%f",&PIB);

    printf("numero de pontos turisticos:"); 
    scanf("%d",&numerodepontosturisticos);



  PIBpercapita = populacao / area;
  densidadepopulacional = PIB / area;


   printf("carta:%d\n",carta);
   printf("estado:%s\n",estado);
   printf("cidade:%s\n",cidade);   //saida de dados mostrando o que o usuario digitou
   printf("codigo:%s\n",codigo);
   printf("populacao:%d\n",populacao);
   printf("area:%.2f\n",area);
   printf("PIB:%.2f\n",PIB);
   printf("numero de pontos turisticos:%d\n",numerodepontosturisticos);
   printf("A densidade populacional é: %.2f\n",densidadepopulacional);
   printf("O PIB per capita é:%.2f\n\n",PIBpercapita);

   //entrada e saida de dado:com a interacao do usuario
   
    printf("numero da carta:");
    scanf("%d",&CARTA1);

    printf("digite o estado:");
    scanf("%s",&ESTADO1);

    printf("digite o codigo:");
    scanf("%s",&CODIGO1);

    printf("digite a cidade:");
    scanf("%s",&CIDADE1);

    printf("digite a populacao:");
    scanf("%d",&POPULACAO1);

    printf("digita a area:");
    scanf("%f",&AREA1);

    printf("digite o PIB:");
    scanf("%f",&PIB1);

    printf("numero de pontos turisticos:"); 
    scanf("%d",&NUMERODEPONTOSTURISTICOS1);


    PIBPERCAPITA1 = POPULACAO1 / AREA1;
    DENSIDADEPOPULACIONAL1 = PIB1 / AREA1;

   printf("carta:%d\n",CARTA1);
   printf("estado:%s\n",ESTADO1);
   printf("cidade:%s\n",CIDADE1);
   printf("codigo:%s\n",CODIGO1);
   printf("populacao:%d\n",POPULACAO1);
   printf("area:%f\n",AREA1);
   printf("PIB:%f\n",PIB1);
   printf("numero de pontos turisticos:%d\n",NUMERODEPONTOSTURISTICOS1);
   printf("A densidade populacional é:%.2f\n",DENSIDADEPOPULACIONAL1);
   printf("O PIB per capita é:%.2f\n\n",PIBPERCAPITA1);
   

    return 0;
}
