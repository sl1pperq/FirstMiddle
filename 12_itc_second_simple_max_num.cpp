int itc_second_simple_max_num(long long number) {
    int max = -1, maxi = -1;
    if (number / 10 == 0) {
        return -1;
    }
    if (number < 0) {
        number *= -1;
    }

    while (number != 0) {
        int digit = number % 10;

        if (digit > max) {
            maxi = max;
            max = digit;
        } else if (digit < max && digit > maxi) {
            maxi = digit;
        }
        number /= 10;
        if (max == maxi) {
            return -1;
        }
    }
    return maxi;
}
