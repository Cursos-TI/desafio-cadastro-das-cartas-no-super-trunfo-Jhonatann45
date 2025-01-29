#include <stdio.h>




int main(){



char nome1[100], nome2[100], nome3[100], nome4[100];
float populacao1, populacao2, populacao3, populacao4;
float area1, area2, area3, area4;
float pib1, pib2, pib3, pib4;
int pontos_turisticos1, pontos_turisticos2, pontos_turisticos3, pontos_turisticos4;
float pibPerCapita1, pibPerCapita2, pibPerCapita3, pibPerCapita4;
float densidadePopulacional1, densidadePopulacional2, densidadePopulacional3, densidadePopulacional4;
 

//dados da cidade 1


printf("\n Cidade 1\n");



printf("Digite Sua Cidade: \n");
scanf("%s", nome1);

printf("Digite A População Da Sua Cidade:\n");
scanf("%f", &populacao1);

printf("Digite A Área da sua cidade:\n");
scanf("%f" , &area1);

printf("Digite O Pib Da Sua Cidade:\n");
scanf("%f", &pib1);

printf("Numeros De Pontos Turísticos:\n");
scanf("%d" , &pontos_turisticos1);


// Dados da Cidade //

printf("Nome da Cidade: %s\n "  , nome1 );
printf("População: %f\n" , populacao1);
printf("Área: %f \n" , area1);
printf("Pib: %f \n" , pib1);
printf("Pontos Turisticos: %d \n" , pontos_turisticos1);


// Calculo da densidade populacional
densidadePopulacional1 = populacao1 / area1;

// Calculo do PIB per capita
pibPerCapita1 = pib1 / populacao1;

// Exibiçao dos resultados


printf("\nDensidade Populacional: %f habitantes por km²\n" , densidadePopulacional1);
printf("PIB per Capita: R$ %f\n" , pibPerCapita1);




// dados da cidade 2

printf("\n Cidade 2\n");



printf("Digite Sua Cidade:\n");
scanf("%s" , nome2);

printf("Digite A População Da Sua Cidade:\n");
scanf("%f" , &populacao2);

printf("Digite A Áerea Da Sua Cidade:\n");
scanf("%f" , &area2);

printf("Digite O Pib Da Sua Cidade:\n");
scanf("%f" , &pib2);

printf("Numeros De Pontos Turistícos:\n");
scanf("%d" , &pontos_turisticos2);


// Dados Da Cidade //

printf("Nome Da Cidade: %s\n" , nome2);
printf("População: %f\n" , populacao2);
printf("Área: %f\n" , area2);
printf("Pib: %f\n" , pib2);
printf("Pontos Turistícos: %d\n" , pontos_turisticos2);


// Calculo da densidade populacional
densidadePopulacional2 = populacao2 / area2;

// Calculo do PIB per capita
pibPerCapita2 = pib2 / populacao2;

// Exibiçao dos resultados


printf("\nDensidade Populacional: %f habitantes por km²\n" , densidadePopulacional2);
printf("PIB per Capita: R$ %f\n" , pibPerCapita2);



// comparação para o super poder


printf("\ncomparação para o super poder\n");
// comparado população
printf("populacão Cidade 1 >= População Cidade 2: %d\n" , populacao1 >= populacao2);
printf("Área Cidade 1 >= Área Cidade 2: %d\n" , area1 >= area2);
printf("Pib per capita Cidade 1 >= Pib per capita Cidade 2: %d\n" , pibPerCapita1 >= pibPerCapita2);
printf(" densidade populacional cidade 1 >= densidade populacional cidade 2: %d\n" , densidadePopulacional1 >= densidadePopulacional2);













printf("Cidade 3 \n");


printf("Digite Sua Cidade:\n");
scanf("%s" , nome3);

printf("Digite A População Da Sua Cidade:\n");
scanf("%f" , &populacao3);

printf("Digite A Área Da Sua Cidade:\n");
scanf("%f" , &area3);

printf("Digite O Pib Da Sua Cidade:\n");
scanf("%f" , &pib3);

printf("Pontos Turisticos:\n");
scanf("%d" , &pontos_turisticos3);



// Dados Da Cidade //

printf("Nome Da Cidade: %s\n" , nome3);
printf("População:%f\n" , populacao3);
printf("Área: %f\n" , area3);
printf("Pib: %f\n" , pib3);
printf("Pontos Turisticos: %d\n" , pontos_turisticos3);




// Calculo da densidade populacional
densidadePopulacional3 = populacao3 / area3;

// Calculo do PIB per capita
pibPerCapita3 = pib3 / populacao3;

// Exibiçao dos resultados



printf("\nDensidade Populacional: %f habitantes por km²\n" , densidadePopulacional3);
printf("PIB per Capita: R$ %f\n" , pibPerCapita3);








printf("Cidade 4\n");



printf("Digite Sua Cidade:\n");
scanf("%s" , nome4);

printf("Digite A População Da Sua Cidade: \n");
scanf("%f" , &populacao4);

printf("Digite A Área Da Sua Cidade: \n");
scanf("%f" , &area4);

printf("Digite O Pib Da Sua Cidade: \n");
scanf("%f" , &pib4);

printf("Pontos Turisticos: \n");
scanf("%d" , &pontos_turisticos4);


// Dados Da Cidade //


printf("Nome Da Cidade: %s\n" , nome4);
printf("População: %f\n" , populacao4);
printf("Área: %f\n" , area4);
printf("Pib: %f\n" , pib4);
printf("Pontos Turisticos: %d\n" , pontos_turisticos4);



// Calculo da densidade populacional
densidadePopulacional4 = populacao4 / area4;

// Calculo do PIB per capita
pibPerCapita4 = pib4 / populacao4;

// Exibiçao dos resultados

printf("\nDensidade Populacional: %f habitantes por km²\n" , densidadePopulacional4);
printf("PIB per Capita: R$ %f\n" , pibPerCapita4);





// comparação para o super poder


printf("\ncomparação para o super poder\n");
// comparado população
printf("populacão Cidade 3 >= População Cidade 4: %d\n" , populacao3 >= populacao4);
printf("Área Cidade 3 >= Área Cidade 4: %d\n" , area3 >= area4);
printf("Pib per capita Cidade 3 >= Pib per capita Cidade 4: %d\n" , pibPerCapita3 >= pibPerCapita4);
printf(" densidade populacional cidade 3 >= densidade populacional cidade 4: %d\n" , densidadePopulacional3 >= densidadePopulacional4);










   return 0;

}
