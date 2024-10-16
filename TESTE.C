#include <stdio.h>
int main (){
int  codigo_da_cidade;
float populacao;
float area;
float pib;
int numero_de_pontos_turisticos;

printf("Digite o codigo_da_cidade:\n");
scanf("%d", &codigo_da_cidade);
printf("Digite populacao:\n");
scanf("%f", &populacao);
printf("Digite area:\n");
scanf("%f", &area);
printf("Digite pib:\n");
scanf("%f", &pib);
printf( "Digite numero_de_pontos_turisticos:\n");
scanf( "%d" ,&numero_de_pontos_turisticos);
printf("codigo_da_cidade - %d,  - populacao - %f" , codigo_da_cidade, populacao);
printf("area - %f, pib - %f, numero_de_pontos_turisticos - %d", area, pib, numero_de_pontos_turisticos);

return 0;

}