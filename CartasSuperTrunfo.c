#include <stdio.h>




int main(){


printf("Desafio Xadrez!\n");

char nome[100];
int populacao;
float area;
float pib;
int pontos_turisticos;

 

printf("Digite Sua Cidade: \n");
scanf("%s", &nome);

printf("Digite A População Da Sua Cidade: \n");
scanf("%d", &populacao);

printf("Digite A Área da sua cidade: \n");
scanf("%f" , &area);

printf("Digite O Pib Da Sua Cidade: \n");
scanf("%f", &pib);

printf("Numeros De Pontos Turísticos: \n");
scanf("%d" , &pontos_turisticos);




printf("Nome da Cidade: %s \n " , nome );
printf("População: %d \n" , populacao);
printf("Área: %f \n" , area);
printf("Pib: %f \n" , pib);
printf("Pontos Turisticos: %d \n" , pontos_turisticos);



return 0;

}