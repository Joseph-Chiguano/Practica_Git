#include <cstdio>

void imprimirTablero(int** tablero, int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (tablero[i][j] == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void generarTablero(int** tablero, int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if ((i + j) % 2 == 0)
                tablero[i][j] = 1; 
            else
                tablero[i][j] = 0; 
        }
    }
}

int main() {
    int tam;
    printf("Ingresa el tamanio del tablero de ajedrez: ");
    scanf("%d", &tam);
    int** tablero = new int*[tam];
    for (int i = 0; i < tam; i++) {
        tablero[i] = new int[tam];
    }
    generarTablero(tablero, tam);
    printf("\n");
    printf("Tablero de ajedrez:\n");
    printf("\n");
    imprimirTablero(tablero, tam);
    for (int i = 0; i < tam; i++) {
        delete[] tablero[i];
    }
    delete[] tablero;
    return 0;
}