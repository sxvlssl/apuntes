int main() {
    volatile int x = -1;
    double res = __builtin_fabs(x);
    return res;
}
