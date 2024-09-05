unsigned long int fatorial_rec (unsigned long int n) {
   if (n == 0) return 1;
   else return n * fatorial_rec(n-1);
}