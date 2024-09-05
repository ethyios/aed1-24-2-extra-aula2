unsigned long int somatorio_rec (unsigned long int n) {
    if (n == 0) return 0;
    else return n + somatorio_rec(n-1);
}