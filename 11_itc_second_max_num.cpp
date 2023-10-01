int itc_second_max_num(long long number) {
    int max = -1;
    if (number >= -9 && number <= 9) {
        return -1;
    }

    long long maxi = -1;
    if (number < 0) {
        number = number * (-1);
    }

    while (number != 0) {
        int digit = number % 10;
        if (digit >= max) {
            maxi = max;
            max = digit;
        } else if (digit < max && digit > maxi) {
            maxi = digit;
        }
        number /= 10;
    }

    return maxi;
}