#include<stdio.h>

int main (){
char estado;
char codigocarta[20];
char nomecidade[20];
int populacao;
float area;
float pbi;
int pontosturisticos;

printf("Desafio Super Trunfo - Países\n");
printf("Tema 1: Cadastro das Cartas\n");

printf("Carta 1:\n");
printf("Digite o estado:");
scanf("%c", &estado);
printf("Digite o código da cidade:");
scanf("%s", &codigocarta);
printf("Digite o Nome da cidade:");
scanf("%s", &nomecidade);
printf("Digite a População da cidade:");
scanf("%d", &populacao);
printf("Digite a Área da cidade:");
scanf("%f", &area);
printf("Digite o Produto Interno Bruto da cidade:");
scanf("%f", &pbi);
printf("Digite a quantidade de Pontos Turísticos da cidade:");
scanf("%d", &pontosturisticos);

}