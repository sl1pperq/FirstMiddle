int itc_null_count(long long number) {
    if (number < 0) {
        number *= -1;
    }
    if (number == 0){
        return 1;
    }
    int null_counter = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit == 0) {
            null_counter += 1;
        }
        number /= 10;
    }
    return null_counter;
}