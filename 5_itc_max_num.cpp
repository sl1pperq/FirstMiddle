int itc_max_num(long long number) {
    if (number < 0) {
        number *= -1;
    }
    int max_digit = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        number /= 10;
    }
    return max_digit;
}