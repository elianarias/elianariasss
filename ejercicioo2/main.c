#include <stdio.h>
#include <stdlib.h>

int main()
{
  float base;
    float altura;
    float area;

    printf("Ingrese la base: ");
    scanf ("%f",&base);

    printf ("Ingrese la altura: ");
    scanf ("%f",&altura);

    area = base * altura;

    printf ("El area es : %f" , area);
return 0;
}
