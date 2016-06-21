#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese dos valores: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Mayor: %d\n", a);
        printf("Menor: %d\n", b);
    } else {
        printf("Mayor: %d\n", b);
        printf("Menor: %d\n", a);
    }
    return 0;
}