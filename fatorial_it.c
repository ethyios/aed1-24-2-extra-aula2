unsigned long int fatorial_it (unsigned long int n) {
    unsigned long int fat=1, i;

    for (i=n; (i>1); i--) {
        fat = fat * i;
    }

    return fat;
}