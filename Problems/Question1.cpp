
int Calculate(int n, int m) {
    if (n > m) {
        return (n * m) - (n - m);
    } else {
        return (m % n) - (m + n);
    }
}


