#include <stdio.h>

int main() {
    float szerokosc, dlugosc, wysokosc;

    printf("Jednostki muszą być zgodne!\n");
    printf("Podaj szerokość prostopadłościanu: ");
    scanf("%f", &szerokosc);

    printf("Podaj długość prostopadłościanu: ");
    scanf("%f", &dlugosc);

    printf("Podaj wysokość prostopadłościanu: ");
    scanf("%f", &wysokosc);

    printf("Objętość wynosi %f j^3\n", szerokosc * dlugosc * wysokosc);

    return 0;
}
