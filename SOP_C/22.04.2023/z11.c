#include <stdio.h>

int main() {
    int n;
    float liczba, suma = 0;

    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Podaj liczbe %d: ", i + 1);
        scanf("%f", &liczba);
        suma += liczba;
    }

    printf("Suma podanych liczb wynosi: %f\n", suma);

    return 0;
}
