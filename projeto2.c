#include <stdio.h>
#include <stdlib.h>
#define tam 10
#include <time.h>
#include<locale.h>

int contarVizinhosVivos(int matriz[tam][tam], int i, int j)
{
    int vizinhos = 0;

    for (int linha = i - 1; linha <= i + 1; linha++)
    {
        for (int coluna = j - 1; coluna <= j + 1; coluna++)
        {
            // verifica se est� dentro da matriz
            if (linha >= 0 && linha < tam && coluna >= 0 && coluna < tam)
            {
                // s� conta se for diferente da c�lula atual
                if (linha == i && coluna == j)
                {
                    // � a c�lula central, ent�o n�o conta
                    // n�o faz nada aqui
                }
                else
                {
                    // � vizinho, soma
                    vizinhos += matriz[linha][coluna];
                }
            }
        }
    }

    return vizinhos;
}


// funcao void para imprimir as matrizes
void imprimeM1(int M1[tam][tam])
{
    int i,j;
    printf("\n");
    for(i=0; i<tam; i++)
    {
        printf("\t\t");
        for(j=0; j<tam; j++)
        {
            if (M1[i][j] == 1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }

            printf(" ");

        }
        printf("\n");
    }

}

int main()
{
    int M1[tam][tam],M2[tam][tam],i,j,res,aux=1,quant,v;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    //GERA a 1a matriz
    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {

            res=(rand()%10)%2;
            if(res==0)
            {
                M1[i][j]=0;
            }
            else
            {
                M1[i][j]=1;
            }
        }
    }

    printf("\n\t Gera��o Inicial:");
    printf("\n\n");
    //IMPRIME

    imprimeM1(M1);

    printf("\n\n\t quantas gera��es:");
    scanf("%d",&quant);
    printf("\n\n");

    // se a quantidade de geracoes for maior que 0 ele tera que fazer o numero de geracoes requisitado pelo usuario
    while(quant>0)
    {
        // esses dois for para percorrer a matriz completa e checar todas as posicoes
        for(i=0; i<tam; i++)
        {
            for(j=0; j<tam; j++)
            {
                // chama a funcao contarVizinhosVivos para cada celula da matriz (10x10) e assim determina se a celula ira se tornar morta ou viva ou permanecer como esta
                v=contarVizinhosVivos(M1, i, j);
                if(M1[i][j]==1)
                {
                    if(v==2||v==3)
                    {
                        M2[i][j]=1;
                    }
                    else
                    {
                        M2[i][j]=0;
                    }
                }
                else
                {
                    if(v==3)
                    {
                        M2[i][j]=1;
                    }
                    else
                    {
                        M2[i][j]=0;
                    }
                }

            }
        }

        for(i=0; i<tam; i++)
        {
            for(j=0; j<tam; j++)
            {
                M1[i][j]=M2[i][j];
            }
        }


        printf("\n\t %d� Gera��o:\n\n",aux);
        imprimeM1(M1);



        aux++;
        quant--;
    }


    return 0;

}

