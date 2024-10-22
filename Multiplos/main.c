#include <stdio.h>
#include <stdlib.h>

void tabuada(); //protótipo da função
void menu();

int main()
{
    menu();
    return 0;
}

void menu()
{
    char opcao =' ';

    while(opcao != 's')
    {
        printf("---------------------------------------------------\n");
        printf("|               1 - Tabuada                        |\n");
        printf("|               2 - Primo                          |\n");
        printf("|               3 - Temperatura                    |\n");
        printf("|                                                  |\n");
        printf("|     Digite uma opcao ou \"s\" para sair            |\n");
        printf("---------------------------------------------------\n");
        scanf(" %c", &opcao);

        switch(opcao)
        {
            case '1':
            {
                tabuada();
                break;
            }
            case '2':
            {
                //executa o numero primo
                break;
            }
            case '3':
            {
                //executa a temperatura
                break;
            }
        }

        system("cls");
    }

}

void tabuada()
{
    system("cls");
    int numero = 0;
    printf("Digite um numero \n");
    scanf(" %d", &numero);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d \n", numero, i, numero * i);
    }
    system("pause");
}
