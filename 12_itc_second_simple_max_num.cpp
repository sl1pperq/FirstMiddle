int itc_second_simple_max_num(long long number) {
    if (number < 10) {
        return -1;
    }
    int max_digit = -1;
    int second_max_digit = -1;
    while (number > 0) {
        int digit = number % 10;
        if (digit > max_digit) {
            second_max_digit = max_digit;
            max_digit = digit;
        } else if (digit > second_max_digit && digit != max_digit) {
            second_max_digit = digit;
        }
        number /= 10;
    }
    if (second_max_digit == -1 || max_digit == second_max_digit) {
        return -1;
    }
    return second_max_digit;
}
