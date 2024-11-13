#include <stdio.h>
int main(){

float not1,not2,not3, media;


printf("Insira a 1º Nota: ");
scanf("%f", &not1);

printf("Insira a 2º Nota: ");
scanf("%f", &not2);

printf("Insira a 3º Nota: ");
scanf("%f", &not3);

media = (not1 + not2 + not3)/ 3;

if (media >= 6.0 )
{
    printf ("APROVADO, COM A MEDIA EM : %.2f", media);
} else {
    printf("RECUPERAÇÃO, COM A MEDIA EM : %.2f", media);
};

return 0

}
