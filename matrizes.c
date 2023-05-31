#include <stdio.h>

/*int main(void) {
  int matriz [2][2]={{1,2},
                     {3,4}}; 
  for (int linha= 0; linha <2;linha++){
    printf("\n");
      for ( int coluna=0;coluna<2;coluna++){
        printf ("matriz[%d][%d]:%d   ", linha,coluna,matriz[linha][coluna]);
      }
  }
}
*/


int main(void) {
  int numlinhas=2;
  int numcolunas=2;
  int matriz[numlinhas][numcolunas];
  
  for (int linha= 0; linha <numlinhas;linha++){
    printf("\n");
      for ( int coluna=0;coluna<numcolunas;coluna++){
        printf ("matriz[%d][%d]:  ", linha,coluna);
        scanf("%d", &matriz[linha][coluna]);
      }
  }
}
