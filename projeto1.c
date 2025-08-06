#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{

    int play = 1, numero, M, C, D, U, i, aux, chute = 0, cU, cD, cC, cM, acertou = 0, resto, contador;

    int U_c = 0, C_c = 0, M_c = 0, D_c = 0;

    setlocale(LC_ALL, "portuguese");

    // Gerar numero
    srand(time(NULL));

    while (play == 1)
    {
        // Gerar numero
        numero = rand() % 9000 + 1000;
        aux = numero;
        // tranforma o numero em digitos
        U = aux % 10;
        aux /= 10;
        D = aux % 10;
        aux /= 10;
        C = aux % 10;
        M = aux / 10;
        // Tela inicial
        printf("\n\t\t\t\t\t=> Bem Vindo Ao Jogo SECRETO!!! <=\n");
        printf("\t\t\tVoc� tem 10 tentativas para acertar o n�mero secreto entre [1000 e 9999]\n");
        printf("\t\t\tA partir da 5�. tentativa o jogo ir� te ajudar, dando dicas\n");
        printf("\t\t\t\t\t\t<<< Digite Algo >>>\n");
        fflush(stdin);
        getchar();
        system("cls");

        // Jogo
        for (i = 10; i > 0; i--)
        {

            // Tentativas
            printf("\t\tTentativas restantes: %d\n", i);
            printf("\t\tUltimo chute: %d\n\n", chute);
            // Mostra o progresso atual
            printf("Seu c�digo �: ");

            if (M_c == 1)
            {
                printf("%d ", M);
            }
            else
            {
                printf("__ ");
            }

            if (C_c == 1)
            {
                printf("%d ", C);
            }
            else
            {
                printf("__ ");
            }

            if (D_c == 1)
            {
                printf("%d ", D);
            }
            else
            {
                printf("__ ");
            }

            if (U_c == 1)
            {
                printf("%d ", U);
            }
            else
            {
                printf("__ ");
            }
            printf("\n\n");
            // dicas

            if (i <= 5)
            {
                if (M_c != 1)
                {
                    resto = M % 2;
                    if (resto == 0)
                    {
                        printf("\nO 1� digito � par.");
                    }
                    else if (M >= 5)
                    {
                        printf("\nO 1� digito � maior ou igual a 5");
                    }
                    else
                    {
                        printf("\nO 1� digito � menor que 5");
                    }
                }
                else if (C_c != 1)
                {
                    resto = C % 2;
                    if (resto == 0)
                    {
                        printf("\nO 2� digito � par.");
                    }
                    else if (C >= 5)
                    {
                        printf("\nO 2� digito � maior ou igual a 5");
                    }
                    else
                    {
                        printf("\nO 2� digito � menor que 5");
                    }
                }
                else if (D_c != 1)
                {
                    resto = D % 2;
                    if (resto == 0)
                    {
                        printf("\nO 3� digito � par.");
                    }
                    else if (D >= 5)
                    {
                        printf("\nO 3� digito � maior ou igual a 5");
                    }
                    else
                    {
                        printf("\nO 3� digito � menor que 5");
                    }
                }
                else if (U_c != 1)
                {
                    resto = U % 2;
                    if (resto == 0)
                    {
                        printf("\nO 4� digito � par.");
                    }
                    else if (U >= 5)
                    {
                        printf("\nO 4� digito � maior ou igual a 5");
                    }
                    else
                    {
                        printf("\nO 4� digito � menor que 5");
                    }
                }
            }

            // recebe um valor
            printf("\n\t Digite o seu chute:");
            scanf("%d", &chute);

            // Valida��o do chute
            if (chute < 1000 || chute > 9999)
            {
                system("cls");
                printf("\nATEN��O!!!\n");
                printf("N�mero Inv�lido!\n");
                printf("Digite um Valor entre 1000 e 9999\n");
                fflush(stdin);
                getchar();
                system("cls");
                i++;
                continue;
            }
            aux = chute;
            cU = aux % 10;
            aux /= 10;
            cD = aux % 10;
            aux /= 10;
            cC = aux % 10;
            cM = aux / 10;

            // se acertou o numero
            if (chute == numero)
            {
                acertou = 1;
                break;
            }

            contador = 0;

            // caracteres
            if (cM == M)
            {
                M_c = 1;
                contador++;
            }
            if (cC == C)
            {
                C_c = 1;
                contador++;
            }
            if (cD == D)
            {
                D_c = 1;
                contador++;
            }
            if (cU == U)
            {
                U_c = 1;
                contador++;
            }

            system("cls");

            printf("\n\n\t\t\tVoc� acertou %d numeros", contador);
            printf("\n\t\t\t\t\t\t<<< Digite Algo >>>\n");
            fflush(stdin);
            getchar();

            system("cls");
        }

        // Tela final

        if (acertou == 1)
        {
            system("cls");
            printf("\n\n\t\t\t\t\t Voc� acertou!!");
            printf("\n\n\t Tentativas usadas:%d", 11 - i);
            printf("\n\n\t N�mero secreto:%d!!", numero);
        }
        else
        {
            system("cls");
            printf("\n\n\t\t\t\t Voc� Perdeu!!");
            printf("\n\n\t\t\t O N�mero secreto era:%d!!", numero);
        }

        // sair do jogo
        do
        {
            printf("\n\n\t\t\t DIGITE 1 PARA JOGAR NOVAMENTE OU 0 PARA SAIR:");
            scanf("%d", &play);
            system("cls");
            if (play != 0 && play != 1)
            {
                printf("\n\t\t\tVALOR INVALIDO!!");
            }
        } while ((play != 0 && play != 1));
        U_c = 0, C_c = 0, M_c = 0, D_c = 0, acertou = 0;
        getchar();
    }

    system("pause");
    return 0;
}
