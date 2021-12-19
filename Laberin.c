#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ARRIBA 72+224
#define ABAJO 80+224
#define DERECHA 77+224
#define IZQUIERDA 75+224

void impmapa(int t, char mapa[t][t], int x, int y, int i,int j,int figact, int xf,int yf){
    for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                if(y==i && x==j){
                    printf("%c",229);
                }
                else{
                    printf("%c",mapa[i][j]);
                }
            }
            printf("\n");
        }
        if(y!=yf || x!=xf){
        printf("Figura actual \n\t%c",figact);
        }else{
        printf("Ganaste.");
        }
}

void movimiento(int t,int *x, int *y,char mapa[t][t],int figact){
    int tecla;
    switch(figact){
    case 185:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ARRIBA:
        if(*y>0 && (mapa[*y-1][*x]+256==185 || mapa[*y-1][*x]+256==186 || mapa[*y-1][*x]+256==187 || mapa[*y-1][*x]+256==201 || mapa[*y-1][*x]+256==203 || mapa[*y-1][*x]+256==204 || mapa[*y-1][*x]+256==206))
        (*y)--;
        break;
    case ABAJO:
        if(*y<t-1 && (mapa[*y+1][*x]+256==185 || mapa[*y+1][*x]+256==186 || mapa[*y+1][*x]+256==188 || mapa[*y+1][*x]+256==200 || mapa[*y+1][*x]+256==202 || mapa[*y+1][*x]+256==204 || mapa[*y+1][*x]+256==206))
        (*y)++;
        break;
    case IZQUIERDA:
        if(*x>0 && (mapa[*y][*x-1]+256==200 || mapa[*y][*x-1]+256==201 || mapa[*y][*x-1]+256==202 || mapa[*y][*x-1]+256==203 || mapa[*y][*x-1]+256==204 || mapa[*y][*x-1]+256==205 || mapa[*y][*x-1]+256==206 ))
        (*x)--;
        break;
    }
        break;
    case 186:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ARRIBA:
        if(*y>0 && (mapa[*y-1][*x]+256==185 || mapa[*y-1][*x]+256==186 || mapa[*y-1][*x]+256==187 || mapa[*y-1][*x]+256==201 || mapa[*y-1][*x]+256==203 || mapa[*y-1][*x]+256==204 || mapa[*y-1][*x]+256==206))
        (*y)--;
        break;
    case ABAJO:
        if(*y<t-1 && (mapa[*y+1][*x]+256==185 || mapa[*y+1][*x]+256==186 || mapa[*y+1][*x]+256==188 || mapa[*y+1][*x]+256==200 || mapa[*y+1][*x]+256==202 || mapa[*y+1][*x]+256==204 || mapa[*y+1][*x]+256==206))
        (*y)++;
        break;
    }
        break;
    case 187:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ABAJO:
        if(*y<t-1 && (mapa[*y+1][*x]+256==185 || mapa[*y+1][*x]+256==186 || mapa[*y+1][*x]+256==188 || mapa[*y+1][*x]+256==200 || mapa[*y+1][*x]+256==202 || mapa[*y+1][*x]+256==204 || mapa[*y+1][*x]+256==206))
        (*y)++;
        break;
    case IZQUIERDA:
        if(*x>0 && (mapa[*y][*x-1]+256==200 || mapa[*y][*x-1]+256==201 || mapa[*y][*x-1]+256==202 || mapa[*y][*x-1]+256==203 || mapa[*y][*x-1]+256==204 || mapa[*y][*x-1]+256==205 || mapa[*y][*x-1]+256==206 ))
        (*x)--;
        break;
    }
        break;
    case 188:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ARRIBA:
        if(*y>0 && (mapa[*y-1][*x]+256==185 || mapa[*y-1][*x]+256==186 || mapa[*y-1][*x]+256==187 || mapa[*y-1][*x]+256==201 || mapa[*y-1][*x]+256==203 || mapa[*y-1][*x]+256==204 || mapa[*y-1][*x]+256==206))
        (*y)--;
        break;
    case IZQUIERDA:
        if(*x>0 && (mapa[*y][*x-1]+256==200 || mapa[*y][*x-1]+256==201 || mapa[*y][*x-1]+256==202 || mapa[*y][*x-1]+256==203 || mapa[*y][*x-1]+256==204 || mapa[*y][*x-1]+256==205 || mapa[*y][*x-1]+256==206 ))
        (*x)--;
        break;
    }
        break;
    case 200:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ARRIBA:
        if(*y>0 && (mapa[*y-1][*x]+256==185 || mapa[*y-1][*x]+256==186 || mapa[*y-1][*x]+256==187 || mapa[*y-1][*x]+256==201 || mapa[*y-1][*x]+256==203 || mapa[*y-1][*x]+256==204 || mapa[*y-1][*x]+256==206))
        (*y)--;
        break;
    case DERECHA:
        if(*x<t-1 && (mapa[*y][*x+1]+256==185 || mapa[*y][*x+1]+256==187 || mapa[*y][*x+1]+256==188 || mapa[*y][*x+1]+256==202 || mapa[*y][*x+1]+256==203 || mapa[*y][*x+1]+256==205 || mapa[*y][*x+1]+256==206))
        (*x)++;
        break;
    }
        break;
    case 201:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ABAJO:
        if(*y<t-1 && (mapa[*y+1][*x]+256==185 || mapa[*y+1][*x]+256==186 || mapa[*y+1][*x]+256==188 || mapa[*y+1][*x]+256==200 || mapa[*y+1][*x]+256==202 || mapa[*y+1][*x]+256==204 || mapa[*y+1][*x]+256==206))
        (*y)++;
        break;
    case DERECHA:
        if(*x<t-1 && (mapa[*y][*x+1]+256==185 || mapa[*y][*x+1]+256==187 || mapa[*y][*x+1]+256==188 || mapa[*y][*x+1]+256==202 || mapa[*y][*x+1]+256==203 || mapa[*y][*x+1]+256==205 || mapa[*y][*x+1]+256==206))
        (*x)++;
        break;
    }
        break;
    case 202:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ARRIBA:
        if(*y>0 && (mapa[*y-1][*x]+256==185 || mapa[*y-1][*x]+256==186 || mapa[*y-1][*x]+256==187 || mapa[*y-1][*x]+256==201 || mapa[*y-1][*x]+256==203 || mapa[*y-1][*x]+256==204 || mapa[*y-1][*x]+256==206))
        (*y)--;
        break;
    case DERECHA:
        if(*x<t-1 && (mapa[*y][*x+1]+256==185 || mapa[*y][*x+1]+256==187 || mapa[*y][*x+1]+256==188 || mapa[*y][*x+1]+256==202 || mapa[*y][*x+1]+256==203 || mapa[*y][*x+1]+256==205 || mapa[*y][*x+1]+256==206))
        (*x)++;
        break;
    case IZQUIERDA:
        if(*x>0 && (mapa[*y][*x-1]+256==200 || mapa[*y][*x-1]+256==201 || mapa[*y][*x-1]+256==202 || mapa[*y][*x-1]+256==203 || mapa[*y][*x-1]+256==204 || mapa[*y][*x-1]+256==205 || mapa[*y][*x-1]+256==206 ))
        (*x)--;
        break;
    }
        break;
    case 203:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ABAJO:
        if(*y<t-1 && (mapa[*y+1][*x]+256==185 || mapa[*y+1][*x]+256==186 || mapa[*y+1][*x]+256==188 || mapa[*y+1][*x]+256==200 || mapa[*y+1][*x]+256==202 || mapa[*y+1][*x]+256==204 || mapa[*y+1][*x]+256==206))
        (*y)++;
        break;
    case DERECHA:
        if(*x<t-1 && (mapa[*y][*x+1]+256==185 || mapa[*y][*x+1]+256==187 || mapa[*y][*x+1]+256==188 || mapa[*y][*x+1]+256==202 || mapa[*y][*x+1]+256==203 || mapa[*y][*x+1]+256==205 || mapa[*y][*x+1]+256==206))
        (*x)++;
        break;
    case IZQUIERDA:
        if(*x>0 && (mapa[*y][*x-1]+256==200 || mapa[*y][*x-1]+256==201 || mapa[*y][*x-1]+256==202 || mapa[*y][*x-1]+256==203 || mapa[*y][*x-1]+256==204 || mapa[*y][*x-1]+256==205 || mapa[*y][*x-1]+256==206 ))
        (*x)--;
        break;
    }
        break;
    case 204:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case ARRIBA:
        if(*y>0 && (mapa[*y-1][*x]+256==185 || mapa[*y-1][*x]+256==186 || mapa[*y-1][*x]+256==187 || mapa[*y-1][*x]+256==201 || mapa[*y-1][*x]+256==203 || mapa[*y-1][*x]+256==204 || mapa[*y-1][*x]+256==206))
        (*y)--;
        break;
    case ABAJO:
        if(*y<t-1 && (mapa[*y+1][*x]+256==185 || mapa[*y+1][*x]+256==186 || mapa[*y+1][*x]+256==188 || mapa[*y+1][*x]+256==200 || mapa[*y+1][*x]+256==202 || mapa[*y+1][*x]+256==204 || mapa[*y+1][*x]+256==206))
        (*y)++;
        break;
    case DERECHA:
        if(*x<t-1 && (mapa[*y][*x+1]+256==185 || mapa[*y][*x+1]+256==187 || mapa[*y][*x+1]+256==188 || mapa[*y][*x+1]+256==202 || mapa[*y][*x+1]+256==203 || mapa[*y][*x+1]+256==205 || mapa[*y][*x+1]+256==206))
        (*x)++;
        break;
    }
        break;
    case 205:
    tecla = getch();
    tecla += getch();
    switch(tecla){
    case DERECHA:
        if(*x<t-1 && (mapa[*y][*x+1]+256==185 || mapa[*y][*x+1]+256==187 || mapa[*y][*x+1]+256==188 || mapa[*y][*x+1]+256==202 || mapa[*y][*x+1]+256==203 || mapa[*y][*x+1]+256==205 || mapa[*y][*x+1]+256==206))
        (*x)++;
        break;
    case IZQUIERDA:
        if(*x>0 && (mapa[*y][*x-1]+256==200 || mapa[*y][*x-1]+256==201 || mapa[*y][*x-1]+256==202 || mapa[*y][*x-1]+256==203 || mapa[*y][*x-1]+256==204 || mapa[*y][*x-1]+256==205 || mapa[*y][*x-1]+256==206 ))
        (*x)--;
        break;
    }
        break;
    }
}

int main(){
    FILE *fichero;
    int t,i,j,x,y,xf,yf,figact;
    fichero = fopen("laberintoD.txt","r");
    printf("----------------------------\n");
    printf("HECHO EN MEXICO\n");
    printf("----------------------------\n");
    if(fichero != NULL){
        fscanf(fichero,"%d",&t);
        fscanf(fichero,"%d",&x);
        fscanf(fichero,"%d",&y);
        fscanf(fichero,"%d",&yf);
        fscanf(fichero,"%d",&xf);
        char mapa[t][t];
        for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                fscanf(fichero,"%d", &mapa[i][j]);
            }
        }

        do{
            system("cls");
    printf("----------------------------\n");
    printf("HECHO EN MEXICO\n");
    printf("----------------------------\n");
            figact = mapa[y][x]+256;
            impmapa(t,mapa,x,y,i,j,figact,xf,yf);
            movimiento(t,&x,&y,mapa,figact);
        }while(x!=xf || y!=yf);
        system("cls");
        impmapa(t,mapa,x,y,i,j,figact,xf,yf);
        fclose(fichero);
    }
    else{
        printf("No se abrio el archivo");
    }
}

