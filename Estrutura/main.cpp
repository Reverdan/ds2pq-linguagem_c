#include <iostream>
#include <C:\Users\Rever\Documents\estruturas.h>

using namespace std;

int main()
{
    Livro livro;
    Pessoa cliente;

    Livro biblioteca[200];

    printf("Digite o nome do livro \n");
    fgets(livro.nome, 50, stdin);
    printf("Digite a categoria do livro \n");
    fgets(livro.categoria, 20, stdin);
    printf("Digite a editora do livro \n");
    fgets(livro.editora, 20, stdin);
    printf("Digite o ano do livro \n");
    fgets(livro.ano, 5, stdin);
    printf("Digite o numero de paginas do livro \n");
    scanf("%d", &livro.paginas);
    getchar();
    printf("Digite o autor do livro \n");
    fgets(livro.autor, 50, stdin);

    printf("Digite o nome do cliente \n");
    fgets(cliente.nome, 50, stdin);




    printf("\n\n\n\n");

    printf("%s\n", livro.nome);
    printf("%s\n", livro.categoria);
    printf("%s\n", livro.editora);
    printf("%s\n", livro.ano);
    printf("%d\n", livro.paginas);
    printf("%s\n", livro.autor);
    printf("%s\n", cliente.nome);

    printf("\n\n\n\n");
    return 0;
}
