long long itc_multi_num(long long number) {
    int summa = 1;
    while (number != 0) {
        summa *= number % 10;
        number /= 10;
    }
    return summa;
}