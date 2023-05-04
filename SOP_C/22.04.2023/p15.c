#include <stdio.h>

float przelicz(float w_dolarach);

int main() {
    float dolary, funty;
    printf("Podaj kwote w dolarach\n");
    scanf("%f", &dolary);
    funty = przelicz(dolary);
    printf("$%.2f to %.2f funtow\n", dolary, funty);
    return 0;
}

float przelicz(float w_dolarach) {
    return w_dolarach / 1.98;
}
