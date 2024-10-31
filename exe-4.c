#include <stdio.h>
int main()
{
    float pi, raio, area;
    printf("digite o raio: ");
    scanf("%f", &raio);
    pi = 3.14;
    area = pi * (raio*raio);
    printf("A area do circulo e %.2f\n", area);
}
