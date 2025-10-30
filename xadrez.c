#include <stdio.h>


// FUNÇÕES RECURSIVAS — Torre, Bispo e Rainha

// ----------- TORRE -----------
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casasRestantes - 1);  // Chamada recursiva
}

// ----------- BISPO -----------
void moverBispo(int movimentosVerticais, int movimentosHorizontais) {
    if (movimentosVerticais == 0) return; // Caso base

    for (int i = 0; i < movimentosVerticais; i++) {
        for (int j = 0; j < movimentosHorizontais; j++) {
            printf("Cima, Direita\n");
        }
    }

    // Reduz gradualmente o número de movimentos verticais recursivamente
    moverBispo(movimentosVerticais - 1, movimentosHorizontais);
}

// ----------- RAINHA -----------
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}


// FUNÇÃO DO CAVALO — Loops complexos e controle de fluxo
void moverCavaloComplexo() {
    printf("Movimento do CAVALO:\n");

    int movimentosVerticais = 2;   // duas casas para cima
    int movimentosHorizontais = 1; // uma casa para a direita

    // Loop externo: controla o movimento vertical
    for (int i = 1; i <= movimentosVerticais; i++) {
        printf("Cima\n");

        // Loop interno: controla o movimento horizontal
        for (int j = 1; j <= movimentosHorizontais; j++) {
            // Controle de fluxo — exemplo de condição inválida
            if (i > 2 || j > 1) {
                continue; // ignora iterações fora do padrão de movimento
            }

            // Movimento final em “L”
            if (i == movimentosVerticais && j == movimentosHorizontais) {
                printf("Direita\n");
                break; // encerra o loop interno
            }
        }
    }
}


// FUNÇÃO PRINCIPAL — Coordena todos os movimentos
int main() {
    // -------------------------------
    // TORRE: 5 casas para a direita
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre);
    printf("\n");

    // -------------------------------
    // BISPO: 5 casas na diagonal (Cima, Direita)
    // -------------------------------
    int movVertical = 5;
    int movHorizontal = 1;
    printf("Movimento do BISPO:\n");
    moverBispo(movVertical, movHorizontal);
    printf("\n");

    // -------------------------------
    // RAINHA: 8 casas para a esquerda
    // -------------------------------
    int casasRainha = 8;
    printf("Movimento da RAINHA:\n");
    moverRainha(casasRainha);
    printf("\n");

    // -------------------------------
    // CAVALO: 2 casas para cima e 1 para a direita (em L)
    // -------------------------------
    moverCavaloComplexo();
    printf("\n");

    printf("Fim da simulação de movimentos das peças de xadrez!\n");

    return 0;
}
