#include <stdio.h>


int main() {

// Torre : 5 casas para a direita.
// bispo : 5 casas para diagonal = para cima e à direita.
// rainha: 8 casas para a esquerda.


// Torre 
printf("Torre\n");

for(int t = 0; t < 5; t++) {
  printf("Direita\n");

}

// Bispo
printf("Bispo\n");

for(int b = 0; b < 5; b++){
    printf("Cima esquerda\n");
}

// Rainha
printf("Rainha\n");

for(int r = 0; r < 8; r++){
    printf("Esquerda\n");

}


    return 0;

}