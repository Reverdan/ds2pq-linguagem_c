#include <iostream>

using namespace std;


int maior(int numero1, int numero2)
{
    int resp = numero2;
    if (numero1 > numero2)
        resp = numero1;
    return resp;
}

int maior(int numero1, int numero2, int numero3)
{
    int resp = maior(numero2, numero3);
    if (numero1 > resp)
        resp = numero1;
    return resp;
}

int main()
{
    int num1 = 0, num2 = 0, num3;
    printf("Digite 3 numeros \n");
    scanf(" %d %d %d", &num1, &num2, &num3);
    printf("O maior e %d", maior(num1, num2, num3));
    return 0;
}
