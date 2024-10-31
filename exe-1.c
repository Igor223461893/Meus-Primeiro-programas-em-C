#include <stdio.h>

int main() {
    int n1, n2, n3, n4, r;

    printf("Insira o 1° numero: ");
    scanf("%d", &n1);

    printf("Insira o 2° numero: ");
    scanf("%d", &n2);

    printf("Insira o 3° numero: ");
    scanf("%d", &n3);

    printf("Insira o 4° numero: ");
    scanf("%d", &n4);

    r = n1 + n2 + n3 + n4;
    printf("A soma E: %d\n", r);

    return 0;
}
