#include <stdio.h>

int main() {
    char znak;
    float liczba1, liczba2, wynik;

    printf("Podaj dzialanie w formie liczba znak liczba (np. 2.5 + 3.2): ");
    scanf("%f %c %f", &liczba1, &znak, &liczba2);

    switch (znak) {
        case '+':
            wynik = liczba1 + liczba2;
            break;

        case '-':
            wynik = liczba1 - liczba2;
            break;

        case '*':
            wynik = liczba1 * liczba2;
            break;

        case '/':
            if (liczba2 != 0) {
                wynik = liczba1 / liczba2;
            } else {
                printf("Nie mozna dzielic przez zero\n");
                return 1;
            }
            break;

        default:
            printf("Nieznany operator\n");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", liczba1, znak, liczba2, wynik);

    return 0;
}
