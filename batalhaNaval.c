#include <stdio.h>


int main(){
int tabuleiro [10][10]={0};
int linha;
int coluna;
int i;
int j; 

for (i =0 ; i< 10 ; i++){
    printf("\n");
    for(j = 0; j < 10; j ++)
{

    printf("%d ", tabuleiro [i][j]);


}

}
////////////////////////////////////////////////////

for (i = 2; i < 3; i ++)
{ for (j = 3; j < 6; j++)

tabuleiro[2][j] = 3 ;

{

printf("%d ", tabuleiro [i][j]);

}
return 0;
}
