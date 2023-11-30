#include <stdio.h>

int main() {
    int minutos = 10;
    int segundos = 0;

    for (minutos = 10; minutos >= 0; minutos--) {
        for (segundos = 59; segundos >= 0; segundos--) {
            printf("%02d:%02d\n", minutos, segundos);
        }
    }

    return 0;
}

