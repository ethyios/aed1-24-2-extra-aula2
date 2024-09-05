unsigned long int somatorio_it (unsigned long int n) {
    unsigned long int soma=0, i;

    for (i=1; i<=n; i++) soma = soma + i;

    return soma;
}