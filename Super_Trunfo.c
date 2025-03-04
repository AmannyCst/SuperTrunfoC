#include <stdio.h>

// Função para calcular Densidade Populacional
float calcularDensidadePopulacional(int populacao, float area) {
    if (area == 0) return 0; // Evita divisão por zero
    return 1/(populacao / area);
}

// Função para calcular PIB per capita
float calcularPIBperCapita(float PIB, int populacao) {
    if (populacao == 0) return 0; // Evita divisão por zero
    return PIB / populacao;
}

int main() {
    char Estado[20], Estado2[20];
    int resultado1 = (Estado[20] == Estado2[20]); // Verifica se são iguais (1 para true, 0 para false)
    char CodigoCarta[20], CodigoCarta2[20];
    int resultado2 = (CodigoCarta[20] == CodigoCarta2[20]); // Verifica se são iguais (1 para true, 0 para false)
    char NomeCidade[20], NomeCidade2[20];
    int resultado3 = (NomeCidade[20] == NomeCidade2[20]); // Verifica se são iguais (1 para true, 0 para false)
    unsigned long int pop, pop2;
    int resultado4 = (pop == pop2); // Verifica se são iguais (1 para true, 0 para false) 
    float Area, Area2;
    int resultado5 = (Area == Area2); // Verifica se são iguais (1 para true, 0 para false)
    float PIB, PIB2; 
    int resultado6 = (PIB == PIB2); // Verifica se são iguais (1 para true, 0 para false)
    int PontosTuristicos, PontosTuristicos2;
    int resultado7 = (PontosTuristicos == PontosTuristicos2); // Verifica se são iguais (1 para true, 0 para false)
    float DensidadePop, DensidadePop2;
    int resultado8 = (DensidadePop == DensidadePop2); // Verifica se são iguais (1 para true, 0 para false) 
    float PIBpCapita, PIBpCapita2;
    int resultado9 = (PIBpCapita == PIBpCapita2); // Verifica se são iguais (1 para true, 0 para false)
    float SuperPoder1, SuperPoder2; 
    int resultado10 = (SuperPoder1 == SuperPoder2); // Verifica se são iguais (1 para true, 0 para false)
    

    // Entrada de dados - Carta 1
    printf("Insira o Estado da Carta:\n");
    scanf("%s", Estado); 
    
    printf("Insira o Código da carta:\n");
    scanf("%s", CodigoCarta);
   
    printf("Insira o nome da cidade:\n");
    scanf("%s", NomeCidade);
    
    printf("Insira a população da cidade:\n");
    scanf("%lu", &pop); 
    
    printf("Insira a área da Cidade em km²:\n");
    scanf("%f", &Area);
    
    printf("Insira o PIB:\n");
    scanf("%f", &PIB);
    
    printf("Insira quantos pontos turísticos há na cidade:\n");
    scanf("%d", &PontosTuristicos);

      
    
    // Cálculo para Carta 1
    DensidadePop = calcularDensidadePopulacional(pop, Area);
    PIBpCapita = calcularPIBperCapita(PIB, pop);

    // Calculando SuperPoder1 como a soma das variáveis anteriores
    SuperPoder1 = (float)pop + Area + PIB + DensidadePop + PIBpCapita;


    // Entrada de dados - Carta 2
    printf("\nAgora iremos cadastrar a segunda carta\n");

    printf("Insira o Estado da Carta:\n");
    scanf("%s", Estado2); 
    
    printf("Insira o Código da carta:\n");
    scanf("%s", CodigoCarta2);
   
    printf("Insira o nome da cidade:\n");
    scanf("%s", NomeCidade2);
    
    printf("Insira a população da cidade:\n");
    scanf("%lu", &pop2); 
    
    printf("Insira a área da Cidade em km²:\n");
    scanf("%f", &Area2);
    
    printf("Insira o PIB:\n");
    scanf("%f", &PIB2);
    
    printf("Insira quantos pontos turísticos há na cidade:\n");
    scanf("%d", &PontosTuristicos2);

    // Cálculo para Carta 2
    DensidadePop2 = calcularDensidadePopulacional(pop2, Area2);
    PIBpCapita2 = calcularPIBperCapita(PIB2, pop2);

      // Calculando SuperPoder2 como a soma das variáveis anteriores
      SuperPoder1 = (float)pop2 + Area2 + PIB2 + DensidadePop2 + PIBpCapita2;

    // Exibição dos resultados
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", CodigoCarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %lu\n", pop);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop);
    printf("PIB per capita: %.2f\n", PIBpCapita);
    printf("\nSuperPoder1: %.2f\n", SuperPoder1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop2);
    printf("PIB per capita: %.2f\n", PIBpCapita2);
    printf("\nSuperPoder2: %.2f\n", SuperPoder2);


    printf("Comparação de Cartas:\n");
    
    printf("População: %d\n", resultado1);
    printf("Área: %d\n", resultado2);
    printf("PIB: %d\n", resultado3);
    printf("Pontos Turisticos: %d\n", resultado4);
    printf("Densidade Populacional: %d\n", resultado5);
    printf("PIB per Capita: %d\n", resultado6);
    printf("Super Poder: %d\n", resultado7);

    return 0;
}









