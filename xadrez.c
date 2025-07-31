#include <stdio.h>


int main() {

// Torre : 5 casas para a direita.
// bispo : 5 casas para diagonal = para cima e à direita.
// rainha: 8 casas para a esquerda.
// Cavalo: 2 casa para cima e 1 para esquerda.
            

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


// Cavalo 


    int movimentocompleto = 1;
    int i;

    while (movimentocompleto--)
    {
    for(i = 0; i < 2; i++){
        printf("Cima\n");
    

    }
     
    printf("Esquerda\n");

    }  
  

    //Movendo a torre com Recursividade . Torre : 5 casas para a direita.

    void movertorre(int casas) {
    if(casas > 0){

        printf("direita\n");

        movertorre(casas - 1);
    }
     
}

 int main(){

 movertorre(5);
   
   return 0;
}  
     

    //Movendo o Bispo com Recursividade . Bispo : 5 casas para diagonal = para cima e à direita.


    void moverbispo(int casas) {
if(casas > 0){

    printf("Cima, esquerda\n");

    moverbispo(casas - 1);
}

}  

int main(){

 moverbispo(5); 



 return 0;


}


//Movendo a Rainha com recursividade. Rainha: 8 casas para a esquerda.

void moverrainha(int casas) {
    if( casas > 0) {

        printf("Esquerda\n");

        moverrainha(casas - 1);
    }

}

int main(){

    moverrainha(8);


return 0;

}






