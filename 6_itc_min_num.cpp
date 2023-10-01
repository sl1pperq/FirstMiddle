int itc_min_num(long long number) {
    int mini = 9;
    if (number < 0){
        number *= -1;
    }
    if (number == 0){
        return 0;
    }

    int a;
    while (number > 0){
        a = number % 10;
        if (a < mini)
            mini = a;
        number /= 10;
    }
    return mini;
}