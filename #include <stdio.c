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


    int CARTA1;
    char ESTADO1 [50];   //são as variaveis da segunda carta e seus respectivos nomes 
    char CODIGO1 [10];
    char CIDADE1[50];
    int POPULACAO1;
    float AREA1;
    float PIB1;
    int NUMERODEPONTOSTURISTICOS1;
    
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

   printf("carta:%d\n",carta);
   printf("estado:%s\n",estado);
   printf("cidade:%s\n",cidade);   //saida de dados mostrando o que o usuario digitou
   printf("codigo:%s\n",codigo);
   printf("populacao:%d\n",populacao);
   printf("area:%f\n",area);
   printf("PIB:%f\n",PIB);
   printf("numero de pontos turisticos:%d\n\n",numerodepontosturisticos);

   //entrada e saida de dados com a interacao do usuario
   
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

   printf("carta:%d\n",CARTA1);
   printf("estado:%s\n",ESTADO1);
   printf("cidade:%s\n",CIDADE1);
   printf("codigo:%s\n",CODIGO1);
   printf("populacao:%d\n",POPULACAO1);
   printf("area:%f\n",AREA1);
   printf("PIB:%f\n",PIB1);
   printf("numero de pontos turisticos:%d\n\n",NUMERODEPONTOSTURISTICOS1);
   

    return 0;
}
