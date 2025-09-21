#include<stdio.h>
#include<conio.h>

#define MAXCOL 2
#define MAXFIL 2

void mostrarMenu(int *);
void llenarMatriz(int [MAXFIL][MAXCOL]);
void mostrarMatriz(int [MAXFIL][MAXCOL]);


int main()
{
    int matriz[MAXFIL][MAXCOL];
    int *peMenu;


    llenarMatriz(matriz);
    mostrarMatriz(matriz);


}

void mostrarMenu(int *){
    printf("\tmenu\n");
    printf("1) llenar matriz");
    printf("2) mostrar matriz");
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