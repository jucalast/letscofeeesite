#include <stdio.h>
#include <unistd.h> // Esta biblioteca é usada para introduzir uma pausa de 1 segundo

int main() {
    int minutos = 10;
    int segundos = 0;

    while (minutos >= 0) {
        while (segundos >= 0) {
            printf("%02d:%02d\n", minutos, segundos);
            segundos--;
            sleep(1);
				if (segundos < 0 && minutos > 0) {
                segundos = 59;
                minutos--;
            }
        }
    }

    return 0;
}

