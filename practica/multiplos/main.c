#include <stdio.h>

int main() {
    int x, y, z;
    printf("Ingrese un valor: ");
    scanf("%d", &x);
    if (x % 2 == 0 || x % 3 == 0 ) {
        printf("%d es multiplo de 2 o del 3\n", x);
    } else {
        printf("%d NO es multiplo ni del 2 ni del 3\n", x);
    }

    
    
    return 0;
}