#include <stdio.h>

int main() {
    int linhas = 10;

    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= i; j++) {
        	printf(" %d", j);
        }
        printf("\n");
    }

    return 0;
}

