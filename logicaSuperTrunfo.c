#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Definição dos atributos das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int pontos_turisticos1, pontos_turisticos2, num_carta = 1, opcao1, opcao2, resultado;
    float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_percapita1, pib_percapita2, super_poder1, super_poder2, inverso_densidade1, inverso_densidade2;
    unsigned long int populacao1, populacao2;

    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Cadastro da primeira carta
    printf("Cadastrando Carta %d\n", num_carta);
    printf("Digite o caracter do Estado: ");
    scanf(" %c", &estado1);
    getchar(); //Limpando o buffer pra receber a próxima string.
    printf("Digite o código da Carta: ");
    fgets(codigo1, 4, stdin);
    printf("Digite o nome da Cidade: ");
    fgets(cidade1, 20, stdin);
    printf("Digite o número total de habitantes: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da Cidade em quilômetros quadrados: ");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Calculo da densidade populacional e PIB per capita.
    densidade_pop1 = (float) populacao1 / area1;
    inverso_densidade1 = 1.0 / densidade_pop1;
    pib_percapita1 = (pib1 * 1000000000.00) / (float) populacao1;
    super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_percapita1 + densidade_pop1 + inverso_densidade1; 

    num_carta++;

    //Cadastro da segunda carta
    printf("\n\nCadastrando Carta %d\n", num_carta);
    printf("Digite o caracter do Estado: ");
    scanf(" %c", &estado2);
    getchar(); //Limpando o buffer pra receber a próxima string.
    printf("Digite o código da Carta: ");
    fgets(codigo2, 4, stdin);
    printf("Digite o nome da Cidade: ");
    fgets(cidade2, 20, stdin);
    printf("Digite o número total de habitantes: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da Cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Calculo da densidade populacional e PIB per capita.
    densidade_pop2 = (float) populacao2 / area2;
    inverso_densidade2 = 1.0 / densidade_pop2;
    pib_percapita2 = (pib2 * 1000000000.00) / (float) populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_percapita2 + densidade_pop2 + inverso_densidade2;

    //Bloco de código responsável por remover o \n no fim da string.
    codigo1[strcspn(codigo1,"\n")] = 0;
    codigo2[strcspn(codigo2,"\n")] = 0;
    cidade1[strcspn(cidade1,"\n")] = 0;
    cidade2[strcspn(cidade2,"\n")] = 0;

    //Criação do Menu Interativo
    printf("*** Escolha o atributo a ser comparado ***\n");
    printf("1 - Exibição de Cartas\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade Demográfica\n");
    printf("Opção 1: ");
    scanf("%d", &opcao1);
    printf("Opção 2: ");
    scanf("%d", &opcao2);

    resultado = (opcao1 == opcao2) ? 1 : 0;
    

    num_carta = 1;

    switch (opcao1){
        case 1:
        // Exibição dos Dados das Cartas:
        // Exibe os valores inseridos para cada atributo da cidade, um por linha.
        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }
        printf("\n\nCarta %d\n", num_carta);
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1, codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
        printf("PIB per Capita: %.2f reais\n\n\n", pib_percapita1);

        num_carta++;

        printf("\n\nCarta %d\n", num_carta);
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2, codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
        printf("PIB per Capita: %.2f reais\n\n\n", pib_percapita2);
        break;

        case 2:
        //Comparando o atributo População

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, População: %li\n", cidade1, populacao1);
        printf("Carta 2 - %s, População: %li\n", cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(populacao1 == populacao2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;

        case 3:
        //Comparando a área

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, Área: %.2f\n", cidade1, area1);
        printf("Carta 2 - %s, Área: %.2f\n", cidade2, area2);
        if (area1 > area2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(area1 == area2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;
        
        case 4:
        //Comparando o PIB

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, PIB: %.2f\n", cidade1, pib1);
        printf("Carta 2 - %s, PIB: %.2f\n", cidade2, pib2);
        if (pib1 > pib2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(pib1 == pib2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;

        case 5:
        //Comparando pontos turísticos

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, Pontos Turísticos: %d\n", cidade1, pontos_turisticos1);
        printf("Carta 2 - %s, Pontos Turísticos: %d\n", cidade2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(pontos_turisticos1 == pontos_turisticos2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;

        case 6:
        //Comparando densidade demográfica

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, Densidade Demográfica: %.2f\n", cidade1, densidade_pop1);
        printf("Carta 2 - %s, Densidade Demográfica: %.2f\n", cidade2, densidade_pop2);
        if (densidade_pop1 < densidade_pop2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(densidade_pop1 == densidade_pop2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;
        default:
            printf("Entrada Inválida, tente novamente!");
    }

    switch (opcao2){
        case 1:
        // Exibição dos Dados das Cartas:
        // Exibe os valores inseridos para cada atributo da cidade, um por linha.
        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }
        printf("\n\nCarta %d\n", num_carta);
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1, codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
        printf("PIB per Capita: %.2f reais\n\n\n", pib_percapita1);

        num_carta++;

        printf("\n\nCarta %d\n", num_carta);
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2, codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
        printf("PIB per Capita: %.2f reais\n\n\n", pib_percapita2);
        break;

        case 2:
        //Comparando o atributo População

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, População: %li\n", cidade1, populacao1);
        printf("Carta 2 - %s, População: %li\n", cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(populacao1 == populacao2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;

        case 3:
        //Comparando a área

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, Área: %.2f\n", cidade1, area1);
        printf("Carta 2 - %s, Área: %.2f\n", cidade2, area2);
        if (area1 > area2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(area1 == area2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;
        
        case 4:
        //Comparando o PIB

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, PIB: %.2f\n", cidade1, pib1);
        printf("Carta 2 - %s, PIB: %.2f\n", cidade2, pib2);
        if (pib1 > pib2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(pib1 == pib2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;

        case 5:
        //Comparando pontos turísticos

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }

        printf("\n\nCarta 1 - %s, Pontos Turísticos: %d\n", cidade1, pontos_turisticos1);
        printf("Carta 2 - %s, Pontos Turísticos: %d\n", cidade2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(pontos_turisticos1 == pontos_turisticos2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;

        case 6:
        //Comparando densidade demográfica

        if(resultado){
            printf("Duas opções iguais, terminando programa\n");
            break;
        }
        
        printf("\n\nCarta 1 - %s, Densidade Demográfica: %.2f\n", cidade1, densidade_pop1);
        printf("Carta 2 - %s, Densidade Demográfica: %.2f\n", cidade2, densidade_pop2);
        if (densidade_pop1 < densidade_pop2)
            printf("A carta 1 (%s) venceu!\n", cidade1);
        else if(densidade_pop1 == densidade_pop2)
            printf("Empate!\n");
        else
            printf("A carta 2 (%s) venceu!\n", cidade2);
        break;
        default:
            printf("Entrada Inválida, tente novamente!");
    }

    

    return 0;
}