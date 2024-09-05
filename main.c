#include <stdio.h>
#include <time.h>

#include "elevar_it.c"
#include "elevar_rec.c"
#include "fibo_rec.c"
#include "fibo_it.c"
#include "fatorial_rec.c"
#include "fatorial_it.c"


int main () {
    char c;
    int n, i=0;
    time_t t1;

    printf ("escolha a para fatorial, b para elevar número e c para fibonacci\n");
    scanf ("%c", &c);

    if (c == 'a') {
        printf ("Digite um número para calcular o fatorial: ");
        scanf ("%d", &n);
        t1 = time(NULL);

        printf ("Fatorial de %d é %lu\n", n, fatorial_it(n));
        printf ("Tempo de execução: %ld\n", time(NULL) - t1);
        printf ("Fatorial de %d é %lu\n", n, fatorial_rec(n));
        printf ("Tempo de execução: %ld\n", time(NULL) - t1);
    } else if (c == 'b') {
        printf ("Digite uma base e um expoente: ");
        scanf ("%d %d", &n, &i);
        t1 = time(NULL);

        printf ("%d elevado a %d é %.0f\n", n, i, elevar_it(n, i));
        printf ("Tempo de execução: %ld\n", time(NULL) - t1);
        printf ("%d elevado a %d é %.0f\n", n, i, elevar_rec(n, i));
        printf ("Tempo de execução: %ld\n", time(NULL) - t1);
    } else if (c == 'c') {
        printf ("Digite um número para calcular o fibonacci: ");
        scanf ("%d", &n);
        t1 = time(NULL);

        printf ("Fibonacci de %d é %lld\n", n, fibo_it(n));
        printf ("Tempo de execução: %ld\n", time(NULL) - t1);
        printf ("Fibonacci de %d é %lld\n", n, fibo_rec(n));
        printf ("Tempo de execução: %ld\n", time(NULL) - t1);
    } else {
        printf ("Opção inválida\n");
        return 1;
    }
}