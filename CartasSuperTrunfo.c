#include <stdio.h>
int main(){

char codigo1[100], codigo2[100];
char nomecidade1[100], nomecidade2[100];
char estado1[100], estado2[100];
float populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos_turisticos1, pontos_turisticos2;
float densidadePopulacional1, densidadePopulacional2;
float pibPerCapita1, pibPerCapita2;
int escolha1, escolha2;


// dados da cidade 1
printf("\nCidade 1\n");

printf("Digite o codigo da cidade:\n");
scanf("%s" , codigo1);

printf("Digite o nome da cidade:\n");
scanf("%s" , nomecidade1);

printf("Digite o estado:\n");
scanf("%s" , estado1);

printf("Digite a população da cidade:\n");
scanf("%f" , &populacao1);

printf("Digite a área da cidade:\n");
scanf("%f" , &area1);

printf("Digite o PIB da cidade:\n");
scanf("%f" , &pib1);

printf("quantidade de pontos turisticos:\n");
scanf("%d" , &pontos_turisticos1);

// calculo densidade populacional
densidadePopulacional1 = populacao1 / area1;

// calculo pib per capita
pibPerCapita1 = pib1 / area1;



// dados cidade 2

printf("\nCidade 2\n");
printf("Digite o codigo da cidade:\n");
scanf("%s" , codigo2);

printf("Digite o nome da cidade:\n");
scanf("%s" , nomecidade2);

printf("Digite o estado:\n");
scanf("%s" , estado2);

printf("Digite a população da cidade:\n");
scanf("%f" , &populacao2);

printf("Digite a área da cidade:\n");
scanf("%f" , &area2);

printf("Digite o PIB da cidade:\n");
scanf("%f" , &pib2);

printf("quantidade de pontos turisticos:\n");
scanf("%d" , &pontos_turisticos2);

// calculo densidade populacional
densidadePopulacional2 = populacao2 / area2;

// calculo pib per capita
pibPerCapita2 = pib2 / area2;



// menu interativo



printf("\nEscolha dois atributos para comparação\n");
printf("1. Nome da cidade\n");
printf("2. População\n");
printf("3. Área\n");
printf("4. Pib\n");
printf("5. pontos turisticos\n");
printf("6. Densidade Populacional\n");



// primeira escolha

printf("Digite o primeiro atributo para comparação(1-6)\n");
scanf("%d" , &escolha1);
if (escolha1 < 1 || escolha1 > 6)
{
 printf("Escolha invalida para o primeiro atributo.\n");
}


// segunda escolha

printf("Digite o segundo atributo a ser comparado.\n");
scanf("%d" , &escolha2);
if (escolha2 < 1 || escolha2 > 6 || escolha1 == escolha2)
{
    printf("Escolha invalida para o segundo atributo.\n");
}


switch (escolha1)
{
case 1:
printf("\ncomparando os nomes das cidades.\n");
printf("Cidade 1: %s\n" , nomecidade1);
printf("Cidade 2: %s\n" , nomecidade2);
    break;
    
    
case 2:
printf("\nComparando as populações.\n");
printf("Cidade 1: %.2f\n" , populacao1);
printf("Cidade 2: %.2f\n" , populacao2);
populacao1 > populacao2 ? printf(" A Cidade 1 tem maior população\n") 
: populacao2 > populacao1 ? printf("A Cidade 2 tem maior população\n") 
: printf("Empate nas populações.\n");
break;


case 3:
printf("\nComparando as áres das cidades.\n");
printf("Cidade 1: %.2f\n" , area1);
printf("Cidade 2: %.2f\n" , area2);
area1 > area2 ? printf("A Cidade 1 tem maior área.\n") 
: area2 > area1 ?  printf("A Cidade 2 tem maior área\n") 
: printf("Empate nas áreas\n");
break;

case 4:
printf("\nComparando os pibs das cidades\n");
printf("Cidade 1: %.2f" , pib1);
printf("Cidade 2: %.2f" , pib2);
pib1 > pib2 ? printf("A Cidade 1 tem maior pib\n") 
: pib2 > pib1 ? printf("A Cidade 2 tem maior pib\n") 
: printf("Empate nos pibs\n");
 break;


 case 5:
printf("\nComparando pontos turisticos\n");
printf("Cidade 1: %d" , pontos_turisticos1);
printf("Cidade 2: %d" , pontos_turisticos2);
pontos_turisticos1 > pontos_turisticos2? printf("A Cidade 1 tem mais pontos turisticos\n") 
: pontos_turisticos2 > pontos_turisticos1 ? printf("A Cidade 2 tem mais pontos turisticos\n") 
: printf("Empate em pontos turisticos\n");
break;

case 6:
printf("\nComparando densidades populacionais\n");
printf("Cidade 1: %.2f" , densidadePopulacional1);
printf("Cidade 2: %.2f" , densidadePopulacional2);
densidadePopulacional1 < densidadePopulacional2 ? printf("A Cidade 1 tem menor densidade\n") 
: densidadePopulacional2 < densidadePopulacional1 ? printf("A Cidade 2 tem menor densidade\n") 
: printf("Empate nas densidades\n");
break;


default:
printf("Opção invalida");
    break;
}








return 0;



}