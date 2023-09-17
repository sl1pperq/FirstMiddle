bool itc_mirror_num(long long number) {
    long long temp = number;
    long long reverse = 0;
    while(temp != 0){
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return (number == reverse);
}