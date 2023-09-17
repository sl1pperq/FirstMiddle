#include <climits>

int itc_min_num(long long number) {
    if (number < 0) {
        number *= -1;
    }
    int min_digit = INT_MAX;
    while (number > 0) {
        int digit = number % 10;
        if (digit < min_digit) {
            min_digit = digit;
        }
        number /= 10;
    }
    return min_digit;
}