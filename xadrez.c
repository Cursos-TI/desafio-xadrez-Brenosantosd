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

int b= 0;
while(b < 5){
    printf("Cima, direita\n");
    b++;
}



// Rainha
printf("Rainha\n");

int r = 8;
do {
    printf("para esquerda\n");
    r--;

}while(r > 0);







    return 0;

}