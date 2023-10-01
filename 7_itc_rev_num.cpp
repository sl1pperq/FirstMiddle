int itc_rev_num(long long number) {
    long long a = 0;
    if (number == 0) {
        return 1;
    }
    if (number < 0) {
        number *= -1;
    }

    int count = 0;
    while (number != 0) {
        a = a * 10 + number % 10;
        number /= 10;
    }
    while(a != 0){
        count++;
        a /= 10;
    }
    return count;
}