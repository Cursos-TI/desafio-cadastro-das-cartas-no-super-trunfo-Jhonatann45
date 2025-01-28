#include <stdio.h>




int main(){


printf("\n Cidade 1\n");

char nome[100];
float populacao;
float area;
float pib;
int pontos_turisticos;
float pibPerCapita;
float densidadePopulacional;
 

printf("Digite Sua Cidade: \n");
scanf("%s", nome);

printf("Digite A População Da Sua Cidade:\n");
scanf("%f", &populacao);

printf("Digite A Área da sua cidade:\n");
scanf("%f" , &area);

printf("Digite O Pib Da Sua Cidade:\n");
scanf("%f", &pib);

printf("Numeros De Pontos Turísticos:\n");
scanf("%d" , &pontos_turisticos);


// Dados da Cidade //

printf("Nome da Cidade: %s\n "  , nome );
printf("População: %f\n" , populacao);
printf("Área: %f \n" , area);
printf("Pib: %f \n" , pib);
printf("Pontos Turisticos: %d \n" , pontos_turisticos);


// Calculo da densidade populacional
densidadePopulacional = populacao / area;

// Calculo do PIB per capita
pibPerCapita = pib / populacao;

// Exibiçao dos resultados


printf("\nDensidade Populacional: %.2f habitantes por km²\n" , densidadePopulacional);
printf("PIB per Capita: R$ %.2f\n" , pibPerCapita);









printf("\n Cidade 2\n");



printf("Digite Sua Cidade:\n");
scanf("%s" , nome);

printf("Digite A População Da Sua Cidade:\n");
scanf("%f" , &populacao);

printf("Digite A Áerea Da Sua Cidade:\n");
scanf("%f" , &area);

printf("Digite O Pib Da Sua Cidade:\n");
scanf("%f" , &pib);

printf("Numeros De Pontos Turistícos:\n");
scanf("%d" , &pontos_turisticos);


// Dados Da Cidade //

printf("Nome Da Cidade: %s\n" , nome);
printf("População: %f\n" , populacao);
printf("Área: %f\n" , area);
printf("Pib: %f\n" , pib);
printf("Pontos Turistícos: %d\n" , pontos_turisticos);


// Calculo da densidade populacional
densidadePopulacional = populacao / area;

// Calculo do PIB per capita
pibPerCapita = pib / populacao;

// Exibiçao dos resultados


printf("\nDensidade Populacional: %.2f habitantes por km²\n" , densidadePopulacional);
printf("PIB per Capita: R$ %.2f\n" , pibPerCapita);








printf("Cidade 3 \n");


printf("Digite Sua Cidade:\n");
scanf("%s" , nome);

printf("Digite A População Da Sua Cidade:\n");
scanf("%f" , &populacao);

printf("Digite A Área Da Sua Cidade:\n");
scanf("%f" , &area);

printf("Digite O Pib Da Sua Cidade:\n");
scanf("%f" , &pib);

printf("Pontos Turisticos:\n");
scanf("%d" , &pontos_turisticos);



// Dados Da Cidade //

printf("Nome Da Cidade: %s\n" , nome);
printf("População:%f\n" , populacao);
printf("Área: %f\n" , area);
printf("Pib: %f\n" , pib);
printf("Pontos Turisticos: %d\n" , pontos_turisticos);




// Calculo da densidade populacional
densidadePopulacional = populacao / area;

// Calculo do PIB per capita
pibPerCapita = pib / populacao;

// Exibiçao dos resultados



printf("\nDensidade Populacional: %.2f habitantes por km²\n" , densidadePopulacional);
printf("PIB per Capita: R$ %.2f\n" , pibPerCapita);








printf("Cidade 4\n");



printf("Digite Sua Cidade:\n");
scanf("%s" , nome);

printf("Digite A População Da Sua Cidade: \n");
scanf("%f" , &populacao);

printf("Digite A Área Da Sua Cidade: \n");
scanf("%f" , &area);

printf("Digite O Pib Da Sua Cidade: \n");
scanf("%f" , &pib);

printf("Pontos Turisticos: \n");
scanf("%d" , &pontos_turisticos);


// Dados Da Cidade //


printf("Nome Da Cidade: %s\n" , nome);
printf("População: %f\n" , populacao);
printf("Área: %f\n" , area);
printf("Pib: %f\n" , pib);
printf("Pontos Turisticos: %d\n" , pontos_turisticos);



// Calculo da densidade populacional
densidadePopulacional = populacao / area;

// Calculo do PIB per capita
pibPerCapita = pib / populacao;

// Exibiçao dos resultados

printf("\nDensidade Populacional: %.2f habitantes por km²\n" , densidadePopulacional);
printf("PIB per Capita: R$ %.2f\n" , pibPerCapita);






   return 0;

}
