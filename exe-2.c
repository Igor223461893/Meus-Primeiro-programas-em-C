#include <stdio.h>

int main()
{
    int n1, n2, n3, soma;
    float r;

    printf("insira o valor da 1° nota: ");
    scanf("%d", &n1);
    printf("insira o valor da 2° nota: ");
    scanf("%d", &n2);
    printf("insira o valor da 3° nota: ");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;
    r = soma / 3.0;

    printf("a media da nota e %.2f\n ", r);

    return 0;
}
