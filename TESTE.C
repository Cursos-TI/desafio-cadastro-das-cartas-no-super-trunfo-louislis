#include <stdio.h>
int main (){
int  codigocidade;
float  populacao;
double  area;
float pib;
int numero_de_pontos_turisticos;

printf("Digite o codigo da cidade:\n");
scanf("%d", &codigocidade);
printf(" Digite populacao:\n");
scanf("%f, &populacao\n");
printf("Digite area:\n");
scanf("%e, &area\n");
printf("Digite pib:\n");
scanf("%2.f, &pib\n");
printf( "Digite numero de pontos turisticos:\n");
scanf("%d\n ,&numero_de_pontos_turisticos\n");
printf("codigo da cidade %d - populacao - %f" , codigocidade, populacao );
printf( "area %e, pib %f", area, pib);

return 0;

}