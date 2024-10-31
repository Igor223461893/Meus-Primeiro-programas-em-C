#include <stdio.h>

int main()
{

    int n1, n2, n3, r, soma, p1, p2, p3;
    float RespostaF;

    printf("insira o valor da 1° nota: ");
    scanf("%d", &n1);
    printf("insira o valor da 2° nota: ");
    scanf("%d", &n2);
    printf("insira o valor da 3° nota: ");
    scanf("%d", &n3);
    printf("insira o peso da 1° nota: ");
    scanf("%d", &p1);
    printf("insira o peso da 2° nota: ");
    scanf("%d", &p2);
    printf("insira o peso da 3° nota: ");
    scanf("%d", &p3);

    r = p1 + p2 + p3;
    soma = (n1 * p1) + (n2 * p2) + (n3 * p3);
    RespostaF = (float)soma / r;
    printf("a media ponderada e %.2f\n ", RespostaF);
    return 0;
}