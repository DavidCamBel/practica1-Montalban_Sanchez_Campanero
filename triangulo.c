#include <stdio.h>
#include <math.h>

// Función para determinar el tipo de triángulo
int checktriangle(int a, int b, int c) {
    if ((c < a + b) && (b < a + c) && (a < c + b)) {
        if (a == b && a == c) {
            printf("Triangulo equilatero \n");
        } 
        else if (a == b || b == c) {
            printf("Triangulo isosceles \n");
        } 
        else {
            printf("Triangulo escaleno \n");
        }
    } 
    else {
        printf("No es un triangulo \n");
    }
    return 0;
}

int main() {
    int a, b, c, i, n;

    printf("Numero de casos de prueba: \n");
    scanf("%d", &n);
    printf("%d\n", n);

    for (i = 1; i <= n; i++) {
        // Corregido: El texto ahora está en una sola línea continua
        printf("Marcar los valores de longitud de los lados del triangulo (uno por linea):\n");

        scanf("%d", &a); 
        printf("%d,", a);

        scanf("%d", &b); 
        printf("%d,", b);

        scanf("%d", &c); 
        printf("%d: \n", c);

        checktriangle(a, b, c);
    } // Punto y coma extra eliminado aquí

    return 0;
}