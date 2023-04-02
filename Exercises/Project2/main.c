int main(void) {
    int n, v, r;
    n = 1;
    v = 4;
    r = 0;
    while (v / n > 0) {
        r += v / n;
        n++;
    }
}