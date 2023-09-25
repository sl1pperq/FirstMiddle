int itc_rev_num(long long number) {
    int rev = 0;
    if (number < 0) {
        number *= -1;
    }
    while (number != 0) {
        rev = rev * 10 + number % 10;
        number /= 10;
    }
    int len = 0;
    while (rev != 0) {
        len++;
        rev /= 10;
    }
    return len;
}
