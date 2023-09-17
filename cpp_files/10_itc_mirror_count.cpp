bool itc_mir_num(long long number) {
    long long temp = number;
    long long reverse = 0;
    while(temp != 0){
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return (number == reverse);
}

int itc_mirror_count(long long number) {
    int count = 0;
    for(long long i = 1; i <= number; i++){
        if(itc_mir_num(i)){
            count++;
        }
    }
    return count;
}