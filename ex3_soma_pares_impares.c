#include <stdio.h>

int soma(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return n + soma(n-2);
}

int main () {
    int n;

    scanf("%d", &n);
    printf("%d\n", soma(n));

    return 0;    
}