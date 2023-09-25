int itc_sum_num(long long number) {
    int summa = 0;
    if (number < 0) {
        number *= -1;
    }
    while (number != 0) {
        summa += number % 10;
        number /= 10;
    }
    return summa;
}