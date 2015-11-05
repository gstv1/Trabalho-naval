#include <stdio.h>

int main()
{
    int mapa[5][5];
    int i, j;
    char continuar;
    
    
 do{
 
    for(i=0;i<=4;i++){
     for(j=0;j<=4;j++)
     {
        printf("\n Entre com números entre 1 e 0 : [%d][%d] - ", i+1, j+1);
        scanf("%d" ,&mapa[i][j]);
    }
   }    
   
    for (i=0; i<=4; i++)
     {
         for(j=0; j<=4; j++)
         {         
                   printf(" %d ", mapa[i][j]);
         }
         printf("\n");
     }
   
        printf("\n Entre com a linha:\n");
        scanf("%d", &j);
    
    
        printf("\n Entre com a coluna:\n");
        scanf("%d", &i);
   
        if(mapa[i][j]==1){
        
        printf("você acertou !!");
    }        
        else if(mapa[i][j]==0){
        
        printf("você errou !!");
    
            
    }
    printf("\n Deseja continuar(s/n)?");
    scanf(" %c", &continuar);
    printf ( "continuar = %c", continuar);

 } while(continuar == 's');
    
    return 0;   
}

