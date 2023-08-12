#include <stdio.h>

void convertirMinusculas(char *cadena) {
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            // Convertir a minúscula sumando 32 a su valor numérico en ASCII
            cadena[i] = cadena[i] + 32;
        }
    }
}
void ingresar(char *cadena, int tam){
    for(int i=0; i)

}

int main() {
    char cadena[] = "CONVERTIR A MINUSCULAS";

    printf("Cadena original: %s\n", cadena);
    convertirMinusculas(cadena);
    printf("Cadena convertida: %s\n", cadena);

    return 0;
}
