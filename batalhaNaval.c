#include <stdio.h>


int main(){
int tabuleiro [10][10]={0};
int linha=2;
int coluna=7;
int i;
int j; 

// Carrega valor 3 na terceira linha nas posições 3,4,5


   for( j = 3 ; j < 6 ; j++)
   {
    tabuleiro [linha][j] = 3;
   }
  

// Carrega valor 3 na oitava coluna nas posições 5,6,7

for (i = 5; i < 8; i++)

  
   {
    tabuleiro [i][coluna] = 3;
   }
   

// printa na tela as colunas de A a J
printf ("  A B C D E F G H I J \n");

for (i =0 ; i< 10 ; i++){
   
    printf("%d ", i+1);
    for(j = 0; j < 10; j ++)
    {

	printf("%d ", tabuleiro [i][j]);
// realiza print de toda Matriz
    }
printf("\n");
}

return 0;
}