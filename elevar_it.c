float elevar_it (float x, int n) {
    float res=1;
    int i;

    for (i=0; i<n; i++) {
        res = res * x;
    }

    return res;
}