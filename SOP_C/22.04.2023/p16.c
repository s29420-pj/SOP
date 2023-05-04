#include <stdio.h>

void wyp_licz(int num);

int main() {
    int liczba;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);
    wyp_licz(liczba);
    return 0;
}

void wyp_licz(int num) {
    printf("Podana liczba wynosi %d\n", num);
}
