#include<stdio.h>
#include<conio.h>

#define MAXCOL 4
#define MAXFIL 4

void mostrarMenu(int *);
void menuOpciones(int, int matriz[MAXFIL][MAXCOL]);
void llenarMatriz(int matriz[MAXFIL][MAXCOL]);
void mostrarMatriz(int matriz[MAXFIL][MAXCOL]);


int main()
{
    int matriz[MAXFIL][MAXCOL];
    int opc;
    int *peMenu = &opc;

    do
    {
        mostrarMenu(peMenu);
        menuOpciones(opc, matriz);
    } while (opc != 7);
    
    
    return 0;

}

void mostrarMenu(int *opc){
    printf("\tmenu\n");
    printf("1) llenar matriz");
    printf("2) mostrar matriz");
    printf("ingresa la opcion: ");
    scanf("%d", opc);
}
void menuOpciones(int opc, int matriz[MAXFIL][MAXCOL] )
{
    switch (opc)
    {
        case 1: llenarMatriz(matriz);break;
        case 2: mostrarMatriz(matriz);break;
            
        
        default: printf("opcion no valida");break;
            
    }
}



void llenarMatriz(int matriz[MAXFIL][MAXCOL] ){
    for (int i = 0; i < MAXCOL; i++)
    {
        for (int f = 0; f < MAXFIL; f++)
        {
            printf("ingresa el valor [%d][%d]: ",i,f);
            scanf("%d",&matriz[i][f]);
        }
        
    }
    

}
void mostrarMatriz(int matriz[MAXFIL][MAXCOL]){
    for (int i = 0; i < MAXCOL; i++)
    {
        for (int f = 0; f < MAXFIL; f++)
            printf("%d ",matriz[i][f]);
        printf("\n");
    }
    printf("\n");

}


