float elevar_rec (float x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    else return x * elevar_rec(x, n-1);
}