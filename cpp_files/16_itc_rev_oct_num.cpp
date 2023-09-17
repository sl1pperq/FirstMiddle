#include <cmath>

int itc_rev_oct_num(long long number) {
    int decimal = 0;
    int power = 0;
    while (number != 0) {
        int digit = number % 10;
        decimal += digit * pow(2, power);
        power++;
        number /= 10;
    }
    return decimal;
}
