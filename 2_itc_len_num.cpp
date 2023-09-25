int itc_len_num(long long number) {
    int count = 0;
    if (number < 0) {
        number *= -1;
    }
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}