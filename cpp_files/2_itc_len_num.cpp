int itc_len_num(long long number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}